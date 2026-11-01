#include<iostream>
#define size 19
using namespace std;

class Stack
{
    public:
    int a[size];
    int top;
    
    Stack()
    {
        top=-1;
    }

    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"Stack is Full.";
        }
        else
        {
            top++;
            a[top]=value;
            cout<<a[top]<<" is added to Stack.\n";   
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
        }
        else
        {
            cout<<a[top]<<" is removed from stack.";
            top--;
        }
    }

    void peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
        }
        else
        {
            cout<<"\nTop = "<<a[top];
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.pop();
    s.peek();
}
