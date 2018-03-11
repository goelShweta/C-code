//Program to implement stack using dynamic array using template
#include <iostream>
#include <cstdlib>
#define MAX 100

using namespace std;

template <class T>
class stack
	/*
	objective: Create a class for implementing Stack using array
	input parameters: none
	output value: none
	description:  class definition
	approach: Class defines data member and member function of the stack class
	*/
{
	T *arr;			                  // for dynamic array
	int top;
	int capacity;		             // checks size defined by user
public:
	stack(int size = MAX);	         // constructor to dynamically create array
	~stack();			             // destructor to delete dynamically the created array
	void push(T);                    // pushes data in stack
	T pop();                         // pops data from stack
	T peek();                        // shows top element of stack
	int size();			             // Current size of stack
	bool isEmpty();                  //  to check if stack is empty
	bool isFull();                   // to check if stack is full
	T input();                       // inputs data from user
	void display();                  // displays stack
};


template <class T>
stack<T> :: stack(int size)
{
    /*
    Objective: To construct the object of class stack.
    Input: size of the stack
    Output: None
    Return value: None
    */
    arr = new T[size];
    top = -1;
    capacity = size;
}

template <class T>
stack<T> :: ~stack()
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
int stack<T> :: size()
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
bool stack<T> :: isEmpty()
{
    /*
    Objective: To check whether stack is empty or not.
    Input: None
    Output: None
    Return value: 1, if stack is empty
                  0,if stack is not empty.
    */
    if(top == -1)
        return 1;
    else
        return 0;
}

template <class T>
bool stack<T> :: isFull()
{
    /*
    Objective: To check whether stack is full or not.
    Input: None
    Output: None
    Return value: 1, if stack is full
                 0,if stack is not full.
    */
    if(top == capacity-1)
        return 1;
    else
        return 0;
}

template <class T>
T stack<T> :: peek()
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
    {
        cout<<"Stack is empty \n";
        return 0;
    }
}

template <class T>
void stack<T> :: push(T ele)
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
        arr[top] = ele;
    }
    else
    {
        cout<<"Stack is full \n";
    }
}

template <class T>
T stack<T> :: pop()
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
        T ele = arr[top];
        top--;
        return ele;
    }
    else
    {
        cout<<"Stack is empty \n";
        return 0;
    }
}

template <class T>
void stack<T> :: display()
{
     if(!isEmpty())
     {
         for(int i=top;i>=0;i--)
         {
             cout<<arr[i]<<endl;
         }
     }
     else
     {
         cout<<"Stack is empty \n";

     }
}

template <class T>
T stack<T> :: input()
{
    T ele;
    cout<<"Enter element  ";
    cin>>ele;
    return ele;
}



int main()
{
  int s;
  cout<<"\nEnter size of stack : ";
  cin>>s;

  stack<int> stk(s);
  int ch;
  char ch2;

  do
  {
      cout<<"\n1.push  \n2.pop  \n3.size  \n4.topmost element  \n5.display  \n6.exit \n";
      cout<<"\nenter yr choice \n";
      cin>>ch;

      switch(ch)
      {
          case 1 :
                    stk.push(stk.input());
                    break;

          case 2 :
                    cout<<"Popped element is "<<stk.pop()<<endl;
                    break;

          case 3 :
                    cout<<"size of stack is "<<stk.size()<<endl;
                    break;

          case 4 :
                    cout<<"Topmost element is  "<<stk.peek()<<endl;
                    break;

          case 5 :
                    stk.display();
                    break;

          case 6 :
                    exit(0);
                    break;

          default : cout<<"\nInvalid choice \n";
      }

      cout<<"\nDo you Want to continue ? ";
      cin>>ch2;

  }while(ch2=='y'||ch2=='Y');

}

