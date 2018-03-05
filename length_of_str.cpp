#include <iostream>

using namespace std;

int main()
{
    int i,count=1;
    char str1[80];
    cout<<"enter the string "<<endl;
    cin.getline(str1,80);
    for(i=0;str1[i]!='\0';++i)
    {
      count++;
    }
    cout<<"total length is "<<count<<endl;
    return 0;
}
