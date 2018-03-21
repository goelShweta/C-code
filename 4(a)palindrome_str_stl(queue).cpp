#include <iostream>
#include<queue>
using namespace std;

int main()
{
    /*
     Objective:To detect palindrome string using queue stl
     Approach:taking two queues
              1st queue: it is having the string
              2nd queue:it is having the reversed string
    */
    string str;
    int i,j,flag=0;
    //int count;
    queue<char> q1,q2;
    cout<<"enter the string to check if palindrome or not";
    cin>>str;

    for(int x=0;x<str.length();x++)
    {
        q1.push(str[x]);
    }
    for(int y=str.length()-1;y>=0;y--)
    {
        q2.push(str[y]);
    }

   /* for(int y=str.length();y>=0;y--)        //        ----------------------displaying q2.
    {
        cout<<q2.front();
        q2.pop();
    }*/
    //cout<<q1.front();
    //cout<<q2.front();
   for(i=0;i<(str.length()/2);i++)
   {
       //cout<<"*****"<<q1.front();
       //cout<<q2.front()<<"\n";
       if(q1.front()==q2.front())
       {
         // count++;
         q1.pop();
         q2.pop();
          flag=1;
          continue;
       }
       else
       {
           flag=0;
           break;
       }
   }
        if(flag==1)
        cout<<"palindrome";
    else
        cout<<"not palindrome";

    return 0;
}
