#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int i;
    char str[80];
    cout<<"enter the string "<<endl;
    cin.getline(str,80);
    for(i=0;str[i]!='\0';++i)
    {
        str[0]=toupper(str[0]);
        if(str[i]==' ')
            str[i+1]=toupper(str[i+1]);
        else
            continue;
    }
    cout<<"reversed string is "<<endl;
    cout.write(str,80);
    return 0;
}
