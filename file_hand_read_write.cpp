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
   fout.open("xyz.txt");
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
   while(fin)
   {
       fin.get(ch);
       fout.put(ch);
   }

   fin.close();
   fout.close();
   return 1;
}

