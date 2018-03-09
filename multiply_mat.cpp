#include <iostream>

using namespace std;

int main()
{
    int i,j,mat1[10][10],mat2[10][10],c[10][10],m,n,p,q;
    cout<<"enter row for mat 1"<<endl;
    cin>>m;
    cout<<"enter column for mat 1"<<endl;
    cin>>n;
    cout<<"enter row for mat 2"<<endl;
    cin>>p;
    cout<<"enter column for mat 2"<<endl;
    cin>>q;
    if(n==p)
    {
    cout<<"enter elements of matrix 1"<<endl;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"enter elements of matrix 2"<<endl;
    for(i=0;i<p;++i)
    {
        for(j=0;j<q;++j)
        {
            cin>>mat2[i][j];
        }
    }
    cout<<"multiply "<<endl;
    for(i=0;i<m;++i)
    {
        for(j=0;j<q;++j)
        {
            c[i][j]=0;
            for(int k=0;k<n;++k)
                {
                    c[i][j]+=mat1[i][k]*mat2[k][j];
                }
                cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}
else
    cout<<"matrix multiplication not compatible "<<endl;
 return 0;
}
