#include <iostream>

using namespace std;

int main()
{
    char str[80];
    int i,count=0;
    cout << "enter the string " << endl;
    cin.getline(str,80);
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            ++count;
    }
    cout<<"total no. of vowels are  "<<count;
    return 0;
}
