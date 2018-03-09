#include <iostream>

using namespace std;

int main()
{
    int rev=0,dig,num;
    cout<<"enter the no. to be checked "<<endl;
    cin>>num;
    int num2=num;
    while(num!=0)
    {
        dig=num%10;
        rev=(rev*10)+dig;
        num=num/10;
    }
    if(num2==rev)
        cout<<"no. is palindrome  "<<num2<<"rev "<<rev<<endl;
    else
        cout<<"not palindrome"<<endl;
    return 0;
}
