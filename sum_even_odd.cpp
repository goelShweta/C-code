#include <iostream>

using namespace std;

int main()
{
    int num,sumeven=0,sumodd=0;
    char ch;
    do{
    cout<<"enter the no. "<<endl;
    cin>>num;
    if(num%2==0)
        sumeven+=num;
    else
        sumodd+=num;
    cout<<"sum of even  "<<sumeven<<endl;
    cout<<"sum of odd  "<<sumodd<<endl;
    cout<<"do u want to add further "<<endl;
    cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
