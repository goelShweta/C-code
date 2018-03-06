#include <iostream>
#include<ctype.h>

using namespace std;

int main()
{
    char ch;
    cout<<"enter the element"<<endl;
    cin>>ch;
    if(isupper(ch))
        cout<<"lower case is "<<char(tolower(ch));
    else if(islower(ch))
        cout<<"upper case is "<<char(toupper(ch));
    return 0;
}
