#include <iostream>

using namespace std;

int main()
{
    int i,n=10,num;
    cout<<"enter the no. whose table is to be printed "<<endl;
    cin>>num;
    for(i=1;i<=10;++i)
    {
        cout<<num<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<num*i<<endl;
    }
    return 0;
}
