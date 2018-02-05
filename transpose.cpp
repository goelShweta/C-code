#include <iostream>

using namespace std;

int main()
{
    int i,j,mat1[3][3];
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

    cout << "transpose of the matrix" << endl;
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            cout<<mat1[j][i]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
