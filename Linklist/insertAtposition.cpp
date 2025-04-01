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
void inserAtEnd (Node* &head, int data)
{
    // new node
    Node *temp = new Node(data);
    if(head == NULL)
    {
        head = temp;
        return;
    }
    Node *tail = head;
    while(tail ->next != NULL)
    {
        tail = tail ->next;
    }
    tail ->next = temp;
}
void insertAtHead (Node *&head, int data)
{
    // new node 
    Node *temp = new Node(data);
    temp ->next = head;
    head = temp;
}

void inserttail(Node* &tail, int data)
{
    // new node
    Node *temp = new Node(data);
    tail ->next = temp;
    tail = temp;
}
void print(Node* &tail)
{
    Node *temp = tail;
    while(temp != NULL)
    {
        cout << temp ->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}
// function to insert a node at a given position
void insertAtPosition (Node* &head, int position, int  data)
{
    // insert at first position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt <position -1)
    {
        temp = temp ->next;
        cnt++;
    }
    // insert at the end of the linked list
    if(temp ->next == NULL)
    {
        inserAtEnd(head, data);
        return;
    }
    // creating a new node for data
    Node* nodetoInsert = new Node(data);
    nodetoInsert ->next = temp ->next;
    temp ->next = nodetoInsert;
}
int main()
{
    Node* node1  = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    inserttail(tail, 20);
    print(head);
    inserttail(tail, 30);
    print(head);
    inserttail(tail, 40);
    print(head);
    insertAtPosition(head, 4, 25);
    print(head);



    return 0;
}