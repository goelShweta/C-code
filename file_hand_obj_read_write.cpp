
#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
struct student
{ char name[20];
  int roll_no;
 /* getdata()
  {
  	cout<<"enter yr name\n";
  	cin.getline(name,20);
  	cout<<"enter yr roll no.\n";
  	cin>>roll_no;
  }
  showdata()
  {
  	cout<<"name : "<<name;
  	cout<<"roll no. : "<<roll_no;
  }*/
};
int main()
{
    ifstream fin;   
	ofstream fout;
	fin.open("abc.txt");
	fout.open("bbb.txt");
	student s1;
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
	while(!fin.eof())
	{ fin.read((char*)&s1,sizeof(s1));
	  fout.write((char*)&s1,sizeof(s1));
	}
	fin.close();
	fout.close();
	return 1;
}

