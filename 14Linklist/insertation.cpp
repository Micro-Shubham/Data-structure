#include <iostream>
using namespace std;
class Node {
   public:
   int data;
   Node *next;
   // constructor
   Node(int data) {
       this->data = data;
       this->next = NULL;
   }
};
// function to insert a node at the end of the linked list
void insertAtHead (Node *&head, int data)
{
    // new node 
    Node *temp = new Node(data);
    temp ->next = head;
    head = temp;
}
// function to print the linked list
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
    Node* node1  = new Node(10);
    Node* head = node1;
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 30);
    print(head);
    return 0;
}