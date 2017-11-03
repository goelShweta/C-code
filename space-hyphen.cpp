#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int len,i;
    char str[80];
    cout << "enter the string " << endl;
    cin.getline(str,80);
    len=strlen(str);
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]==' ')
            str[i]='-';
     //   else
     //       continue;
    }
    cout<<"new string is "<<endl<<str;
    return 0;
}
