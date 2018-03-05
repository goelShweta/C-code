#include <iostream>

using namespace std;
int largest(int a[10]);

int main()
{
    int a[10],i,large;
    cout<<"enter the elements "<<endl;
    for(i=0;i<10;++i)
    {
        cin>>a[i];
    }
    large=largest(a);
    cout<<"largest no. is "<<endl<<large;
    return 0;
}
int largest(int a[10])
{
    int lar=a[0],i;
    for(i=0;i<10;++i)
    {
        if(a[i]>lar)
            lar=a[i];
    }
    return lar;
}
