// Insertion of a node in a doubly linked list at the front
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* prev;
Node* next;

public:
Node(int data1) {
    data = data1;
    next = NULL;
    prev = NULL;
}
};

// Function to insert a new node at the front of doubly linked list
Node* insertAtFront(Node*head, int new_data) {
    // create a new node 
    Node* new_node = new Node(new_data);

    // make next of new node as head
    new_node->next = head;

    // change  prev  of head  node to new node
    if(head!= NULL) {
        head->prev = new_node;
        // return the new node as the head  of the doubly linked list
    }
        return new_node;

}

void print (Node* head) {
    while(head != NULL) {
        cout << head->data << " " ;
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->prev = head->next;
    cout<<"List before insertion at the front: ";
    print(head);
    int data = 5;
    head = insertAtFront(head,data);
    cout<<"List after the insertion at the front: ";
    print(head);
    return 0; 
}