#include <iostream>

using namespace std;

int main()
{
    int i,j,udiag=0,ldiag=0,mat1[3][3];
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
    cout<<"  matrix upper diagonal sum  "<<endl;
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            if(i<j)
              udiag+=mat1[i][j];
            else if(i>j)
              ldiag+=mat1[i][j];
        }
    }
    cout<<endl;
    cout<<"sum of upper diagonal elements "<<udiag<<endl;
    cout<<"sum of lower diagonal elements "<<ldiag<<endl;
    return 0;
}
