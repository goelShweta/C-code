//Program to convert infix expression to postfix expression


#include<iostream>
#include<string>
#include<stack>
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
    if(opr=='*' || opr=='/')
        return 2;
    if(opr=='+' || opr=='-')
        return 1;
}


bool isOperator(char ch)
{
    /*
    Objective : to check if a character is an operator or not
    Input parameters :
                    ch : character
    Return value :1, if ch is operator
                0, if ch is not an operator
    */

    if(ch=='^' || ch=='*' || ch=='/' || ch=='+' || ch=='-' || ch=='(' || ch==')')
        return 1;
    else
        return 0;
}


void infixToPostfix(string exp)
{
    /*
    Objective : converts infix expression to postfix expression
    Input parameters :
                    exp : string infix expression
    Return value : None
    */

    stack<char> s;

    for(int i=0; i < exp.length(); i++)
    {

        // exp[i] is a scanned character

        if(isOperator(exp[i]))   // if scanned character is an operator
        {
            if(s.empty())
            {
                s.push(exp[i]);
            }

            else if( exp[i] == '(')
            {
                s.push(exp[i]);
            }

            else if( exp[i] == ')')
            {
                while(!s.empty() && s.top() != '(' )   // pops out all operators until '(' is at top
                {
                    cout<<s.top();
                    s.pop();
                }
                s.pop();  // to pop '('
            }

            else if( precedence(exp[i]) > precedence(s.top()) )
            {
                s.push(exp[i]);
            }

            else if( precedence(exp[i]) <= precedence(s.top()))
            {
                while( !s.empty() && (precedence(exp[i]) <= precedence(s.top())) && s.top() != '(' )
                {
                    cout<<s.top();
                    s.pop();
                }
                s.push(exp[i]);
            }

        }

        else    // if scanned character is operand
        {
            cout<<exp[i];
        }
    }


    // After the whole expression is scanned, empty the stack
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
    cout<<"Enter infix expression\n";
    cin>>exp;
    cout<<"Postfix Expression\n";
    infixToPostfix(exp);
    return 0;
}
