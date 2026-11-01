#include<iostream>
using namespace std;

class queue
{
    public:
    int q[10];
    int front;
    int rear;

    queue()
    {
            front=-1;
            rear=-1;
    }

    void enqueue(int value)
    {
        if(rear==9)
        {
            cout<<"Queue is overflow.\n";
        }
        else
        {
            if(front==-1)
            {
                front=0;
            }
            rear++;
            q[rear]=value;
            cout<<q[rear]<<" is added in a queue.\n";
        }
    }

    void dequeue()
    {
        if(front==-1||front>rear)
        {
            cout<<"Queue is Underflow.\n";
        }
        else
        {
            cout<<q[front]<< " is removed from queue.\n";
            front++;
            if(front==-1)
            {
                front=0;
            }
        }
    }

    void display()
    {
        cout<<"Queue Elements are :";
        for(int i=front;i<=rear;i++)
            {
                cout<<"\t"<<q[i]<<"\t";
            }
    }

    void showfront()
    {
        if(front==-1)
        {
            cout<<"Queue is empty.";
        }
        else
        {
            cout<<"\nFront :- "<<q[front];
        }
    }

    void showrear()
    {
        if(front==-1)
        {
            cout<<"Queue is empty.";
        }
        else
        {
        cout<<"\nRear :- "<<q[rear];
        }
    }
};

int main()
{
    queue w;
    w.enqueue(34);
    w.enqueue(35);
    w.enqueue(36);
    w.enqueue(38);
    w.dequeue();
    w.display();
    w.showfront();
    w.showrear();

    return 0;
}
