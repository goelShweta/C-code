#include <iostream>

using namespace std;

int main()
{
    int leven=0,lodd=1,seven=0,sodd=1,i,num;
    do{
    cout<<"enter the element "<<endl;
    cin>>num;
    if(num%2==0)
    {
        if(num>leven)
            leven=num;
        if(num<seven)
            seven=num;
    }
    else{
        if(num>lodd)
            lodd=num;
        if(num<lodd)
            sodd=num;
    }
    }while(num!=0);
    cout<<" largest odd "<<lodd<<endl;
    cout<<" smallest odd "<<sodd<<endl;
    cout<<" largest even "<<leven<<endl;
    cout<<" smallest even "<<seven<<endl;
    return 0;
}
