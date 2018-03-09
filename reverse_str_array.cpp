#include <iostream>
#include<ctype.h>

using namespace std;

int main()
{
    int str1[4][20],i,j;
    cout<<"enter the strings of array "<<endl;
    for(i=0;i<4;++i)
    {
      cin.getline(str1[i],20);
    }
    cout<<"The strings of array "<<endl;
    for(i=0;i<4;++i)
    {
      cout.write(str1[i],20);
    }

    return 0;
}
