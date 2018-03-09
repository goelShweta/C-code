#include <iostream>

using namespace std;

int main()
{
    int num,i;
    char ch;
    do{
        int flag=0;
    cout<<"enter the number "<<endl;
    cin>>num;
    if(num==1)
         flag=1;
    else if(num==2||num==3)
         flag=0;
    else
        for(i=2;i<=num/2;i++)
        {
         if(num%i==0)
             flag=1;
        }
         if(flag!=0)
              cout<<num <<" is not prime "<<endl;
         else
              cout<<num<<" is prime"<<endl;
    cout<<"do u want to add further "<<endl;
    cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
