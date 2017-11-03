#include <iostream>

using namespace std;

int main()
{
   union student
   {
   int i=2;
   char ch;
   };//st;
   union student st;
   cout<<"value on i "<<st.i<<"\n";
   cout<<"value of ch "<<st.ch<<endl;
   st.i=5;
   st.ch=65;
   st.i=4;
   cout<<"value on i "<<st.i<<"\n";
   cout<<"value of ch "<<st.ch<<endl;
   st.i=3;
   //st.ch=' ';
   st.i=9;
    cout<<"value on i "<<st.i<<"\n";
   cout<<"value of ch "<<st.ch;
    return 0;
}
