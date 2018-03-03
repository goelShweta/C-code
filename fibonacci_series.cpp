#include <iostream>

using namespace std;

int main()
{
    int first=0,second=1,third,sum,lim;
    cout<<"enter the limit till where u want to print series "<<endl;
    cin>>lim;
    cout<<"fibonacci series "<<endl;
    cout<<first<<endl;
    cout<<second<<endl;
    for(int i=3;i<=lim;++i)
    {
        third=first+second;
        cout<<third<<endl;
        first=second;
        second=third;
    }
    return 0;
}
