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
        for(int a =0; a<m; a++)
        {
            q[a]*=p[a];
        }
        for (int c=0; c<n; c++)
            cout<<q[c]<<" ";

    }
    else if(n<m)
    {
        for(int b =0; b<n; b++)
        {
            p[b]*=q[b];
        }
        for (int d=0; d<m; d++)
            cout<<p[d]<<" ";
    }
    else
    {
        for(int b =0; b<n; b++)
        {
            p[b]*=q[b];
        }
        for (int d=0; d<m; d++)
            cout<<p[d]<<" ";
    }

}

