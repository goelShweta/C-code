#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
	/*   			
	objective: Create a structure for a Node for Binary Search Tree
	input parameters: none
	output value: none
	*/
	int data;
	node *lchild;
	node *rchild;
	node(int d,node *lc=NULL,node *rc=NULL)
	{
	    data=d;
	    lchild=lc;
	    rchild=rc;
	}
}*temp;
class bst{
	/*   			
	objective: Create a Binary Search Tree class 
	input parameters: none
	output value: none
	approach: Class definition
	*/
    public:
	node* root;
	bst()
	{
		root=0;
	}
	node* insert(node *rot,int dt);
	void del(node *rot);
	int search(node *rot,int dt);
	void inorder(node* root);
	void preorder(node* root);
	void postorder(node* root);
};
node* bst::insert(node *rot,int dt)
{
	/*  
	objective : to insert required node into binary tree  
	input : root node  , element to be inserted into binary tree
	output : none 
	approach : using recursion 
*/
    if(rot==NULL)
        rot= new node(dt);
    else if(dt<(rot->data))
      rot->lchild=insert(rot->lchild,dt);
    else if(dt>(rot->data))
      rot->rchild=insert(rot->rchild,dt);
    return rot;  
}
void bst::del(node *rot)
{
  /*  
	objective : to delete required node
	input : root node
	output : none 
	approach : delete using copying 
*/
    node *prev,*temp=rot;
    if(rot->lchild==0)
      rot=rot->rchild;
    else if(rot->rchild==0)
      rot=rot->lchild;
    else{
	    temp = rot->lchild;
	    prev = rot;
	    while(temp->rchild != 0)
	    {
		prev = temp;
		temp = temp->rchild;
	    }
	    rot->data= temp->data;
	    if(prev == rot)
	      prev->lchild = temp->lchild;
	    else
	      prev->rchild = temp->lchild;
    }
    delete temp;
}
int bst::search(node *rot,int dt)
{
	/*  
	objective : to search for an specific element
	input : element to be searched and root
	output : none 
	approach : using recursion
*/
    if(rot==NULL)
    {
        cout<<"empty tree\n";
        return 0;
    }
    else 
	{
	if(rot->data==dt)
      return 1;
    else if(dt<rot->data)
      search(rot->lchild,dt);
    else if(dt>rot->data)
      search(rot->rchild,dt);
    }

}
void bst::inorder(node* root)
{
	/*  
	objective : inorder traversal of binary tree  
	input : root node of binary tree
	output : none 
	approach : using recursion 
*/
    
 if(root!=0)
 {
     inorder(root->lchild);
     cout<<"\n "<<root->data<<"   ";
     inorder(root->rchild);
 }
}
void bst::preorder(node* root)
{
		/*  
	objective : preorder traversal of binary tree  
	input : root node of binary tree
	output : none 
	approach : using recursion 
*/
if(root!=0)
 {
     cout<<"\n "<<root->data<<"   ";
     preorder(root->lchild);
     preorder(root->rchild);
 }
}
void bst::postorder(node* root)
{
		/*  
	objective : postorder traversal of binary tree  
	input : root node of binary tree
	output : none 
	approach : using recursion 
*/
    if(root!=0)
 {
     postorder(root->lchild);
     postorder(root->rchild);
     cout<<"\n "<<root->data<<"   ";
 }
}
int main()
{
    int ch,val,d;
    node* c;
    char ch2;
    bst obj;
    do{
    cout<<"enter your choice\n";
    cout<<"1-Insert\n2-Delete\n3-Search\n4-Inorder\n5-Preorder\n6-Postorder\n";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Enter the element u want to insert\n";
               cin>>val;
               obj.root=obj.insert(obj.root,val);
               break;
        case 2:obj.del(obj.root);
               //cout<<"deleted value is "<<val;
               break;
        case 3:cout<<"Enter the element u want to search\n";
               cin>>val;
               d=obj.search(obj.root,val);
               if(d==0)
               		cout<<"element not found ";
               	else
				   cout<<"element found ";	
               break;
        case 4:cout<<"Inorder traversal\n";
               obj.inorder(obj.root);
               break;
        case 5:cout<<"preorder traversal\n";
               obj.preorder(obj.root);
               break;
        case 6:cout<<"postorder traversal\n";
               obj.postorder(obj.root);
               break;
    }
    cout<<"Do you want to continue\n";
    cin>>ch2;
    }while(ch2=='y'||ch2=='Y');
    return 0;
}

