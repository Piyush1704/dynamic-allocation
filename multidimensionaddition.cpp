#include <iostream>
#include <new>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int** p;

    p = new(nothrow)int*[n];
    for(int i=0;i<n;i++)
        p[i]= new(nothrow)int[m];


        for(int j=0;j<n;j++)
        {
            for (int k=0;k<m;k++)
                cin>>p[j][k];
        }
 int n1,m1;
    cin>>n1;
    cin>>m1;
    int** p1;

    p1 = new(nothrow)int*[n1];
    for(int i1=0;i1<n1;i1++)
        p1[i1]= new(nothrow)int[m1];


        for(int j1=0;j1<n1;j1++)
        {
            for (int k1=0;k1<m1;k1++)
                cin>>p1[j1][k1];
        }

    if(n==n1&&m==m1)
        {
            for (int a=0;a<n;a++)
            {
                for(int b=0;b<m;b++)
                    p[a][b]+=p1[a][b];
            }
            for (int a=0;a<n;a++)
            {
                for(int b=0;b<m;b++)
                    cout<<p[a][b];
            }

        }
        else
            cout<<"Matrices can't be added";



}



