#include <iostream>

using namespace std;
int sum(int a[10]);

int main()
{
    int a[10],i;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;++i)
    {
        cin>>a[i];
    }
    int result=sum(a);
    cout<<"sum is "<<endl<<result;
    return 0;
}
int sum(int a[10])
{
    int i,res=0;
    for(i=0;i<10;++i)
    {
        res=res+a[i];
    }
    return(res);
}
