#include <iostream>
using namespace std;
class Node 
{
    public:
    int data; 
    Node *next;
    // constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};
// function to insert a node at the end of the linked list
void insertAtTail (Node* &tail, int data)
{
    // new node
    Node *temp = new Node(data);
    tail ->next = temp;
    tail = temp;
}
void print(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp ->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}
int main ()
{
    // create new node 
    Node* node1  = new Node(10);
    // head pointing to node1
    // tail pointing to node1
    // head and tail are same
    // head and tail are pointing to the same node
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 30);
    print(head);
    return 0;
}