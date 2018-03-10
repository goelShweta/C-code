#include <iostream>

using namespace std;

int main()
{
    int i,j,mat1[3][3],rsum=0,csum=0;
    cout<<"enter elements of matrix "<<endl;
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"elements of matrix "<<endl;
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            cout<<mat1[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"  matrix row sum  "<<endl;
    for(i=0;i<3;++i)
    {
        rsum=0;
        for(j=0;j<3;++j)
        {
            rsum+=mat1[i][j];
        }
        cout<<"sum of "<<i+1<<" row elements "<<rsum<<endl;
    }
    cout<<"  matrix column sum  "<<endl;
    for(j=0;j<3;++j)
    {
        csum=0;
        for(i=0;i<3;++i)
        {
            csum+=mat1[i][j]; //or normally we can use for(i) then for(j) and then mat1[j][i]
        }
        cout<<"sum of "<<j+1<<" column elements "<<csum<<endl;
    }
    return 0;
}
