#include <iostream>
#include <new>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cin>>n;
    cin>>m;
    int** p;

    p = new(nothrow)int*[n];
    for(i=0; i<n; i++)
        p[i]= new(nothrow)int[m];


    for(j=0; j<n; j++)
    {
        for (k=0; k<m; k++)
            cin>>p[j][k];
    }
    int n1,m1;
    cin>>n1;
    cin>>m1;
    int** p1;

    p1 = new(nothrow)int*[n1];
    for(i=0; i<n1; i++)
        p1[i]= new(nothrow)int[m1];


    for(j=0; j<n1; j++)
    {
        for (k=0; k<m1; k++)
            cin>>p1[j][k];
    }

    if(m==n1)
    {
        int** p2;

        p2 = new(nothrow)int*[n];
        for(i=0; i<n; i++)
            p2[i]= new(nothrow)int[m1];


        for(j=0; j<n; j++)
        {
            for (k=0; k<m1; k++)
            p2[j][k]=0;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m1;j++){
                for(k=0;k<n;k++){
                    p2[i][j] += p[i][k] * p1[k][j];
                }

            }
        }

          for(i=0;i<n;i++)
        {
            for(j=0;j<m1;j++){


                    cout<<p2[i][j]<<" ";


            }
            cout<<endl;
        }
    }
    else cout<<"Matrix multiplication not possible";



}




