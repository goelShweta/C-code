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
          top=-1;
          capacity=size;
          arr=new T[size];
}
template <class T>
stack<T>::~stack()
{
          delete arr;
}
template <class T>
bool stack<T>::isEmpty()
{
     if(top==-1)
       return 1;
     else
       return 0;
}

template <class T>
bool stack<T>::isFull()
{
     if(top==size()-1)
       return 1;
     else
       return 0;
}

template <class T>
T stack<T>::peek()
{
     if(!isEmpty())
        return arr[top];
     else
        return 0;
}
template <class T>
int stack<T>::size()
{
    return capacity;
}
template <class T>
void stack<T>::push(T ele)
{
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



