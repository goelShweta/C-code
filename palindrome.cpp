#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int i,j,len,flag;
    char str[20];
    cout<<"enter the string "<<endl;
    cin.getline(str,20);
    len=strlen(str);
    cout<<"string is  "<<str<<endl;
    cout<<"length is  "<<len<<endl;
    for(i=0,j=len-1;i<len/2;++i,--j)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
        else
            continue;

    }
    if(flag==0)
        cout<<"not palindrome "<<endl;
    else
        cout<<"palindrome  "<<endl;
    return 0;
}
