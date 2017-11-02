#include <iostream>

using namespace std;

int main()
{
    int a=2321;
    char c[] ="da";
    long l=1234334445;
    short sh=12;
    float f=12.34;
    double d=12.345;
    string s[]="abcdefgh";
    cout <<"integer size "<<sizeof(a)<<endl;
    cout <<"character size "<<sizeof(c)<<endl;
    cout <<"float size "<<sizeof(f)<<endl;
    cout <<"double size "<<sizeof(d)<<endl;
    cout <<"string size "<<sizeof(s)<<endl;
    cout <<"long size "<<sizeof(l)<<endl;
    cout <<"short size "<<sizeof(sh)<<endl;
     return 0;
}
