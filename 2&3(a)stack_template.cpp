#include<iostream>
#define SIZE 10
using namespace std;

/*
objective: Create a class for implementing Stack using array
input parameters: none
output value: none
description: class definition
approach: Class defines data member and member function of the stack class
*/
template <class T>
class stack
{
      int *arr;
      int top;
      int capacity;
   public:
          stack(int);
          ~stack();
          void push(T);
          T pop();
          T peek();
          int size();
          bool isEmpty();
          bool isFull();
          void display();
};

template <class T>
stack<T>::stack(int size)
{
    /*
Objective: To construct the object of class stack.
Input: size of the stack
Output: None
Return value: None
*/

          top=-1;
          capacity=size;
          arr=new T[size];
}
template <class T>
stack<T>::~stack()
{
    /*
Objective: To destruct the object of class stack.
Input: None
Output: None
Return value: None
*/

          delete arr;
}
template <class T>
bool stack<T>::isEmpty()
{
    /*
Objective: To check whether stack is empty or not.
Input: None
Output: None
Return value: 1, if stack is empty
0,if stack is not empty.
*/

     if(top==-1)
       return 1;
     else
       return 0;
}

template <class T>
bool stack<T>::isFull()
{
    /*
Objective: To check whether stack is full or not.
Input: None
Output: None
Return value: 1, if stack is full
0,if stack is not full.
*/

     if(top==size()-1)
       return 1;
     else
       return 0;
}

template <class T>
T stack<T>::peek()
{
    /*
Objective: To get the topmost element of the stack.
Input: None
Output: None
Return value: return topmost element,if stack is not empty
0, otherwise.
*/

     if(!isEmpty())
        return arr[top];
     else
        return 0;
}
template <class T>
int stack<T>::size()
{
    /*
Objective: To return the size of stack.
Input: None
Output: None
Return value: size of stack
*/

    return capacity;
}
template <class T>
void stack<T>::push(T ele)
{
    /*
Objective: To push the element in the stack.
Input: the element to be pushed
Output: None
Return value: None
*/

     if(!isFull())
     {
           top++;
           arr[top]=ele;
     }
     else
          cout<<"overflow\n";
}
template <class T>
T stack<T>::pop()
{
    /*
Objective: To pop the element from the stack.
Input: None
Output: None
Return value: top element, if stack is not empty
0, otherwise.
*/

     if(!isEmpty())
     {
           int ele=arr[top];
           top--;
           return ele;
     }
     else
     {
          cout<<"underflow\n";
          return -1;
     }
}

template <class T>
void stack<T>::display()
{
     if(!isEmpty())
     {
         for(int i=top;i>=0;i--)
            cout<<arr[i];

     }
     else
          cout<<"overflow\n";
}
int main()
{
   int sz,ch,in;
   char ch2;
   cout<<"enter the size of stack\n";
   cin>>sz;

   stack<int> stk(sz);
   do
{
cout<<"\n1.push \n2.pop \n3.size \n4.topmost element \n5.display \n";
cout<<"\nenter yr choice \n";
cin>>ch;

switch(ch)
{
case 1 :
     cout<<"enter element u want to enter\n";
     cin>>in;
stk.push(in);
break;

case 2 :
cout<<"Popped element is "<<stk.pop()<<endl;
break;

case 3 :
cout<<"size of stack is "<<stk.size()<<endl;
break;

case 4 :
cout<<"Topmost element is "<<stk.peek()<<endl;
break;

case 5 :
stk.display();
break;

default : cout<<"\nInvalid choice \n";
}

cout<<"\nDo you Want to continue ? ";
cin>>ch2;

}while(ch2=='y'||ch2=='Y');

}



