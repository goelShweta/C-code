#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j,temp;
    char str[80]="my name shwe is shweta goel ",str2[20]=" shweta goel";
    cout<<"main string "<<str<<endl;
    cout<<"substring "<<str2<<endl;
   // cout<<"enter the string "<<endl;
   // cin.getline(str,80);
   // cout<<"enter the substring "<<endl;
   // cin.getline(str2,10);
    for(i=0;str[i]!='\0';++i)
    {
      j=0;
      if(str[i]==str2[j])
      {
          temp=i+1;
          while(str[i]==str2[j])
          {
          i++;
          j++;
          cout<<" i is "<<i<<endl;
          cout<<"j is "<<j<<endl;
          }
      if(str2[j]=='\0')
      {
          cout<<"string found at pos "<<i-j;
          break;
      }
      else
      {
          i=temp;
          temp=0;
      }

    }
    }
    if(temp==0)
      cout<<"string not found "<<endl;

    return 0;
}
