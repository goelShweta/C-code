#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //clrscr();

    int i,j;
    long int x=6;
    string s="hello";
    char ch;
    //x=s;   ERROR
    //cout<<"value of long int having string value "<<x<<endl;
    i=4;
    ch='abcd';//value of last element is printed
    j=ch;
    cout<<"int value of char is "<<j<<endl;
    ch=i;
//    cout<<" x= 4 check "<<x=2<<endl;  ERROR
    cout<<"char value of int "<<ch<<endl;
    cout<<"size of char "<<sizeof(char)<<endl;
     cout<<"size of int "<<sizeof(int)<<endl;

    return 0;
}
