#include <iostream>
#include<string.h>
#include<cstdlib>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    int i,k ;
    char str1[80],str2[80],str3[80];
    cout<<"enter ur string "<<endl;
    cin.getline(str1,80);
    cout<<"enter second string "<<endl;
    cin.getline(str2,80);
    for(i=0;str1[i]!='\0';++i)
    {
        str3[i]=str1[i];
    }

    for(k=0;str2[k]!='\0';++k)
        str3[i+k+1]=str2[k];
    cout<<"concatenated string is "<<str3<<endl;
    return 0;
}
