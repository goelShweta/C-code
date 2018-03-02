#include <iostream>

using namespace std;
int  swap(int &a,int &b);

int main()
{
    int a,b;
    cout<<"enter value of a "<<endl;
    cin>>a;
    cout<<"enter value of b "<<endl;
    cin>>b;
    cout<<"value of ele  "<<a<<endl;
    cout<<"value of ele  "<<b<<endl;
    swap(a,b);
    cout<<"value of ele after swap "<<a<<endl;
    cout<<"value of ele after swap  "<<b<<endl;
    return 0;
}
int  swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"value after swap  "<<a<<"  "<<b<<endl;
}

