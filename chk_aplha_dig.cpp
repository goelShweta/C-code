#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
   // int a ;
    char ch;
    cout<<"enter the element "<<endl;
    cin>>ch;
   // a=ch;

    if(isalnum(ch))
    {
        cout<<"alphanumeric "<<endl;
        if(isupper(ch))
            cout<<"upper case "<<endl;
        else if(islower(ch))
            cout<<"lower case"<<endl;
        else if(isdigit(ch))
            cout<<"digit"<<endl;
    }
    else
        cout<<"not alphanumeric"<<endl;
    return 0;
}
