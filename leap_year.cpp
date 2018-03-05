#include <iostream>

using namespace std;

int main()
{
    int year,n;
    cout<<"enter the years "<<endl;
    cin>>year;
    if(year%4==0)
        cout<<year<<" is a leap year"<<endl;
    else
        cout<<"not a leap year "<<endl;
    return 0;
}
