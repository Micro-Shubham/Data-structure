#include <iostream>
using namespace std;
struct Node {
 int data;
 Node *next, *prev;

 // constructor
 Node(int new_data) {
    data = new_data;
    next = prev = nullptr;
 }
};

// Function to insert data at the end of a node
Node* InsertionAtEnd(Node* head, int new_data) {
    // create a new node
    Node* new_node = new Node(new_data);

    // If the linked list is empty , set the new node as the head of the of linked list
    if(head == nullptr){
        head = new_node;
    } else {
        Node* curr = head;
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        // set the next  of last node to new node
        curr->next = new_node;
        // set prev of  new node  to last node
        new_node->prev = curr;
    }
    return head;
}
 
// Function to print all the list
void printlist (Node *head){
    while(head != nullptr) {
        cout<< head->data<<" " ;
        head = head->next;
    }
    cout<<endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    cout<<"List before the insertion: ";
    printlist(head);

    int data = 4;
    cout<<"List after the insertion: ";
    InsertionAtEnd(head,data);
    printlist(head);
    return 0;
}