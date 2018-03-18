#include <iostream>
#include<stack>
using namespace std;
/*
  objective:to reverse a string using STL stack
  input:None
  output:None
*/
int main()
{
    int n,x;
    stack<int> s1;
    cout<<"enter the size of stack\n";
    cin>>n;
    cout<<"enter the no.s\n";
    for(int i=0;i<n;i++)
    {
      cin>>x;
      s1.push(x);
    }
    cout<<"------------Reversed string is------------- \n";
    while(!s1.empty())
    {
        cout<<s1.top()<<"\n";
        s1.pop();
    }


    return 0;
}
