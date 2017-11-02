#include <iostream>

using namespace std;
class student{
    private:string name;
    public:
        student(string z)
        {
            name=z;
            cout<<name<<endl;
        }
        student()
        {
            name="shweta";
            cout<<name<<endl;
        }
        void setname(string n)
        {
        name=n;
        }
        string getname()
        {
         return name;
        }
};

int main()
{
    student stu;
    student stu2("my name");
    stu.setname("abc");
    cout <<endl<< "name   "<<stu.getname();
    return 0;
}
