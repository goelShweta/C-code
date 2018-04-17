#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
   ifstream fin;
   ofstream fout;
   fin.open("abc.txt") ;
   fout.open("ccc.txt");
   if(!fin)
   {
       cout<<"file does not exist";
       return 0;
   }
   if(!fout)
   {
       cout<<"file does not exist";
       return 0;
   }
   fin.seekg(5);
   fout.seekp(10);
   cout<<"tellg() telling current position ------  "<<fin.tellg();
    cout<<"tellp() telling current position ------  "<<fout.tellp();
   while(fin)
   {
       fin.get(ch);
       fout.put(ch);
   }

   fin.close();
   fout.close();
   return 1;
}

