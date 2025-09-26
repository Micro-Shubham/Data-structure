#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;

  // constructor
  Node (int data1) {
    data = data1;
    next = nullptr;
  }
};

// Function to insert the new node at the end of the linkedlist
Node* insertionAtEnd(Node* head, int data) {
    // create new node
    Node* newNode = new Node(data);

    // if the Linked list is empty  , make the new node head and return 
    if(head == nullptr){
        return newNode;
    }

    // store the head reference  in a temporary variable
     Node* last = head;

     // traverse till the last node
     while(last->next != nullptr) {
        last = last->next;
     }

     // change the  next the  pointer  of the last  node
     // to point to the new node
      last->next = newNode;
      return head;
}

void printlist(Node* head) {
  while(head != nullptr) {
    cout << head->data ;
    head = head->next;
  }
  cout<<endl;
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "Linked list before the insertion: ";
    printlist(head);

    // insert new data
    head = insertionAtEnd(head,5);
    cout << "Linked list after the insertion: ";
    printlist(head);
    return 0;
}