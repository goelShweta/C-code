#include <iostream>

using namespace std;

int main()
{
    int ch;
    string c;
    enum color{red,green,blue,yellow}c_type;
    do{
    c_type=red;
    cout<<"enter your choice";
    cout<<"1 - red "<<"\n";
    cout<<"2 -green "<<"\n";
    cout<<"3 - blue "<<"\n";
    cout<<"4 - yellow "<<"\n";
    cin>>ch;
    switch(ch)
    {
     case 1 : cout<<"value is "<<sizeof(c_type)<<" "<<"red";
              break;
     case 2 : cout<<"value is "<<sizeof(c_type+1)<<" "<<"green";
              break;
     case 3 : cout<<"value is "<<sizeof(c_type+2)<<" "<<"blue";
              break;
     case 4 : cout<<"value is "<<sizeof(c_type+3)<<" "<<"yellow";
              break;
     default:cout<<"wrong choice";
    }
    cout<<"Do you want to continue "<<"\n";
    cin>>c;
    }while(c=="y"||c=="Y");
    return 0;
}
