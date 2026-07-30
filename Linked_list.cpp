#include<iostream> 
using namespace std;

// Node class 
class Node 
{ 
public:
    int data;
    Node *next;

    // Constructor 
    Node(int value)  
    { 
        data = value;
        next = nullptr;
    } 
};

// Linked List class
class Linkedlist 
{
    public:
        Node *head; 
    
        // Constructor  
        Linkedlist()
        {
            head = nullptr;
        }
    
        // Add node at the end
        void add(int value)
        {
            Node *n1 = new Node(value);
            // If list is empty 
            if (head == nullptr) 
            {
            head = n1;
            return;
        }
        Node *temp = head;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        
        // Attach the new node
        temp->next = n1;
    }
    // Display linked list 
    void display()
    {
        if (head == nullptr)
        {
            cout << "The linked list is empty";
            return;
        }
        Node *temp = head;
        while(temp != nullptr)
        {
            cout << temp->data <<" ->  ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{
    Linkedlist l1; 
    l1.add(23);
    l1.add(34);
    l1.add(45);
    l1.display();
    return 0;
}
