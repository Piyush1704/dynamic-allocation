#include<iostream>
#include<new>
#include<cstdlib>
#include<ctime>
using namespace std;

void valueallot(int ***p,int a,int b,int c)
{
    for(int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
                p[i][j][k]=rand()%90+10;
        }
    }
}
void print(int ***p,int a,int b,int c)
{
    for(int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
                cout<<p[i][j][k]<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}
bool exchange(int ***p,int a,int b,int c,int d,int e)
{
    int *f;
    int *g;
    int temp;
    if(d<a&&e<a)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                f=&p[d][j][k];
                g=&p[e][j][k];
                temp =*g;
                *g=*f;
                *f=temp;
            }
        }
        return 1;
    }
    else
        return 0;
}

int main()
{
    int ***p;
    int a,b,c;
    cin>>a>>b>>c;
    p=new int**[a];
    for(int i=0; i<a; i++)
    {
        p[i]=new int*[b];
        for(int j=0; j<b; j++)
        {
            p[i][j]= new int [c];
        }
    }

    valueallot(p,a,b,c);
    cout<<"Before Exchange"<<endl;
    print(p,a,b,c);
    cout<<"Enter Indices To Exchange"<<endl;
    int d,e;
    cin>>d;
    cin>>e;
    int x;
    x=exchange(p,a,b,c,d,e);
    if(x==1)
    {
        cout<<"After Exchange"<<endl;
        print(p,a,b,c);
    }
    else
        cout<<"Can't be exchanged";
}
