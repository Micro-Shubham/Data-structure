#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next, *prev;

    //constructor
    Node(int new_data) {
        data = new_data;
        next = prev = nullptr;
    }
};

// Function to insert Node at the specific place
Node *InsertionAtPositioin(Node *head, int new_data, int pos) {
    // create a new node
    Node *new_node = new Node(new_data);
    // insertion at beginning
    if(pos == 1){
        new_node->next = head;
        // If the  linked list is not empty, set the prev of head to new node
        if(head != nullptr) {
            head->prev = new_node;
        }
        // set the new node as the head
        head = new_node;
        return head;
    }

    Node *curr = head;
    // Traverse the list to find the node  before the insertion point
    for(int i =1; i< pos-1 && curr!= nullptr;i++) {
        curr = curr->next;
    }
   
    // set the prev of new node to curr
    new_node->prev = curr;

    // set the new of new node to next of curr
    new_node->next = curr->next;

    // update the next of current node to new node
    curr->next = new_node;
    // if the new node is  not the last node , update prev of next node to new node
    if(new_node->next != nullptr) {
        new_node->next->prev = new_node;
    }
    return head;
}

// print the list
void printlist(Node *head){
    while(head != nullptr) {
     cout<<head->data<<" ";
     head = head->next;
    }
  cout << endl;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;
    cout<<"List before the insertion: ";
    printlist(head);
    int data = 3;
    int pos = 3;
    cout<<"List after the insertion: ";
    head = InsertionAtPositioin(head,data,pos);
    printlist(head);
    return 0;
}