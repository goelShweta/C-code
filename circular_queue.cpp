
#include <iostream>
#include <cstdlib>

using namespace std;
class queue
	/*

	objective: Create a class to implement Queue(circular) using dynamically created array

	input parameters: none

	output value: none

	description:  Class definition

	approach: Class definition provides data member and member functions for the Queue class

	*/
{
 	int *arr;			// array to store queue elements
	int capacity;			// maximum capacity of the Q
	int front;			// front points to front element in the Q
	int rear;			// rear points to last element in the Q
	int count;			// current size of the Q
public:
	queue(int);			// constructor
	~queue();
	int dequeue();
	void enqueue(int);
	int peek();  				// returns front element
	int size1();				// returns current size of Q
	bool isEmpty();
	bool isFull();
	void display();
};

 queue::queue(int size)
{
/*
    Objective: To construct the object of class queue.
    Input: size of the queue
    Output: None
    Return value: None
    */
	arr=new int[size];
	capacity=size;
	front=-1;
	rear=-1;


}

 queue::~queue()
{
/*
    Objective: To destruct the object of class queue.
    Input: None
    Output: None
    Return value: None
    */
    delete arr;
}
int queue::peek()
{
 /*
    Objective: To get the topmost element of the queue.
    Input: None
    Output: None
    Return value: return topmost element,if queue is not empty
                  0, otherwise.
    */
	return arr[front];
}
int queue::size1()
{
/*
    Objective: To return the size of queue.
    Input: None
    Output: None
    Return value: size of queue
    */
    return capacity;
}

bool queue::isEmpty()
{
/*
    Objective: To check whether queue is empty or not.
    Input: None
    Output: None
    Return value: 1, if queue is empty
                  0,if queue is not empty.
    */
	if(front==-1)
       return true;
    else
	   return false;
}

bool queue::isFull()
{
/*
    Objective: To check whether queue is full or not.
    Input: None
    Output: None
    Return value: 1, if queue is full
                 0,if queue is not full.
    */
	if(((front==0)&&(rear==capacity-1)) ||(front==rear+1))
       return true;
    else
	   return false;
}

void queue::enqueue(int ele)
{
/*
    Objective: To insert the element in the queue.
    Input: the element to be inserted
    Output: None
    Return value: None
    */
	//if(isFull())
	if(isFull())
        cout<<"OVERFLOW";
	else if(front==-1)
		{
			rear=front=0;
			arr[rear]=ele;
		}
    else if(rear==capacity-1)
        {
            rear=0;
            arr[rear]=ele;
        }
    else
		{
        	rear++;
            arr[rear]=ele;
        }
}
int queue::dequeue()
{
/*
    Objective: To dequeue the element from the queue.
    Input: None
    Output: None
    Return value: top element, if queue is not empty
               0, otherwise.
    */
	int ele;
	if(!isEmpty())
	{
	    ele=arr[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==capacity-1)
        {
            front=0;
        }
		else
            {
	         front++;
            }
      return ele;
	}
	else
	{
	   cout<<"UNDERFLOW";;
	   return 0;
    }
}
void queue::display()
{
/*
    Objective: To display the element of the queue.
    Input: None
    Output: None
    Return value: None
    */int i;
	if(!isEmpty())
	  {
	  	for(i=front;i<=rear;i++)
	  	{
	  		cout<<arr[i];
		  }
	  /*	if(front>=rear)
	  	{
	  	    for(i=front;i<=rear;i++)
	  		 cout<<arr[i];
	    }
	    else
	    {
          for(i=0;i<=rear;i++)
	  		cout<<arr[i];
          for(i=front;i<capacity;i++)
	  		cout<<arr[i];
		}*/
	}
	   // cout<<arr[rear];
	else
	  cout<<"empty queue";
}
int main()
{

int s,el;
cout<<"\nEnter size of queue : ";
cin>>s;
queue obj(s);
int ch;
char ch2;

do
{
cout<<"\n1.enqueue \n2.dequeue \n3.size \n4.peek \n5.display \n6.exit \n";
cout<<"\nenter yr choice \n";
cin>>ch;

switch(ch)
{
case 1 :
	cout<<"enter the element u want to insert";
	cin>>el;
     obj.enqueue(el);
     break;

case 2 :
	 cout<<"Deleted element is "<<obj.dequeue()<<endl;
	 break;

case 3 :
	 cout<<"size of stack is "<<obj.size1()<<endl;
	 break;

case 4 :
	 cout<<"Topmost element is "<<obj.peek()<<endl;
	 break;

case 5 :
	 obj.display();
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

