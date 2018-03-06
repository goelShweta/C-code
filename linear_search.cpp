#include <iostream>

using namespace std;

int main()
{
    int i,a[10],ele,flag=0,pos;
    cout<<"enter the array elements "<<endl;
    for(i=0;i<10;++i)
       cin>>a[i];
    cout<<"elements of array are "<<endl;
    for(i=0;i<10;++i)
       cout<<a[i]<<endl;
    cout<<"enter the element u want to search "<<endl;
    cin>>ele;
    for(i=0;i<10;++i)
    {
        if(a[i]==ele)
        {
            flag=1;
            pos=i;
        break;
        }
    }
    if(flag==1)
        cout<<"element found at position "<<i+1<<endl;
    else
        cout<<"element not found "<<endl;
    return 0;
}
