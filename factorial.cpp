#include <iostream>

using namespace std;
int fact(int num);

int main()
{
    int a,result=1;
    cout<<"enter the no. whose factorial is to be calculated"<<endl;
    cin>>a;
    while(a>0)
    {
     result=result*fact(a);
     a--;
    }
    cout<<"factorial of the no. is"<<endl<<result;
    return 0;
}
 int fact(int f)
 {
   int result=1;
   result=result*f;
   return(result);
 }
