#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int ***p;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    p=new int **[a];
    for(int i=0;i<a;i++)
    {
        p[i]=new int *[b];
        for(int j=0;j<b;j++)
        {
            p[i][j]=new int[c];
        }
    }
        for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++)
                p[i][j][k]=rand()%90+10;
        }
        }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++)
                cout<<p[i][j][k]<<" ";
                cout<<endl;
        }
            cout<<endl<<endl;
    }

}

