#include <iostream>
#include<stack>
#include<string>
using namespace std;

int precedence(char opr)
{
    /*
    Objective : to set precedence of operator
    Input parameters :
                    opr : operator whose precedence is to be returned
    Return value : returns precedence of operator
    */
    if(opr=='^')
        return 3;
    if(opr=='*'||opr=='/')
        return 2;
    if(opr=='+'||opr=='-')
        return 1;
}
int isoperator(char ch)
{
    /*
    Objective : to check if a character is an operator or not
    Input parameters :
                    ch : character
    Return value :1, if ch is operator
                0, if ch is not an operator
    */
    if(ch=='*'||ch=='/'||ch=='+'||ch=='-'||ch=='^'||ch=='('||ch==')')
        return 1;
    else
        return 0;
}
int infix_to_postfix(string exp)
{
    /*
    Objective : converts infix expression to postfix expression
    Input parameters :
                    exp : string infix expression
    Return value : None
    */
    stack<char> s;
    for(int i=0;i<exp.length();i++)
    {
        if(isoperator(exp[i]))
        {
            if(s.empty())
            {
                s.push(exp[i]);
            }
            else if(exp[i]=='(')
            {
                s.push(exp[i]);
            }
            else if(exp[i]==')')
            {
                while(!s.empty()&&s.top()!='(')
                {
                    cout<<s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(precedence(exp[i])>precedence(s.top()))
            {
                s.push(exp[i]);
            }
            else if(precedence(exp[i])<=precedence(s.top()))
            {
                while(!s.empty()&&(precedence(exp[i])<=precedence(s.top()))&&s.top()!='(')
                {
                    cout<<s.top();
                    s.pop();
                }
                s.push(exp[i]);
            }
        }
        else
        {
            cout<<exp[i];
        }
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
int main()
{
    // Objective : To convert infix expression to postfix expression
    // Approach : using function infixToPostfix(string)

    string exp;
    cout<<"enter the expression\n";
    cin>>exp;
    cout<<"postfix expression is.......\n";
    infix_to_postfix(exp);
    return 0;
}
