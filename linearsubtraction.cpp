#include <iostream>
#include <new>
using namespace std;

int main()
{
    int m;
    int *p;
    cin>>m;
    p = new (nothrow) int [m];
    for(int i=0; i<m; i++)
        cin>>p[i];
    int n;
    int *q;
    cin>>n;
    q = new (nothrow) int [n];
    for(int j=0; j<n; j++)
        cin>>q[j];
    if(m<n)
    {
        for(int k=m;k<=n;k++)
            p[m]=0;
        for(int a =0; a<n; a++)
        {
            q[a]-=p[a];
        }
        for (int c=0; c<n; c++)
            cout<<q[c]<<" ";

    }
    else if(n<m)
    {
         for(int l=n;l<=m;l++)
            q[l]=0;
        for(int b =0; b<m; b++)
        {
            q[b]-=p[b];
        }
        for (int d=0; d<m; d++)
            cout<<q[d]<<" ";
    }
    else
    {
        for(int b =0; b<n; b++)
        {
            q[b]-=p[b];
        }
        for (int d=0; d<m; d++)
            cout<<q[d]<<" ";
    }

}

