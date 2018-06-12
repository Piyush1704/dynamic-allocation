#include <iostream>
#include<cstdlib>
#include<ctime>
#include<new>
using namespace std;

void initArray(int ***myarray,int x,int y,int z)
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<z; k++)
                myarray[i][j][k]=rand()%90+10;
        }
    }
}
void printArray(int ***myarray,int x,int y,int z)
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<z; k++)
                cout<<myarray[i][j][k]<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}
int main()
{
    int ***p;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    p=new int **[a];
    for(int i=0; i<a; i++)
    {
        p[i]=new int *[b];
        for(int j=0; j<b; j++)
        {
            p[i][j]=new int[c];
        }
    }
    initArray(p,a,b,c);
    cout<<"Before exchange"<<endl;
    printArray(p,a,b,c);
    int x,y;
    cin>>x;
    cin>>y;
    int temp;
    int *f;
    int *g;
    for(int j=0; j<b; j++)
    {
        for(int k=0; k<c; k++)
        {
             f=&p[x][j][k];
             g=&p[y][j][k];
             temp =*g;
             *g=*f;
             *f=temp;
        }
    }
    cout<<"after exchange"<<endl;
    printArray(p,a,b,c);
}


