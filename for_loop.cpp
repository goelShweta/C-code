#include <iostream>

using namespace std;

int main()
{
    int i,n;
    char str[] = "hello world";
    n = sizeof(str);
    cout<<"length is "<<n<<"\nd";
    for(i=0;i<n;i++)
        cout<<"value at "<<i<<" is "<<str[i]<<"\n";
    return 0;
}
