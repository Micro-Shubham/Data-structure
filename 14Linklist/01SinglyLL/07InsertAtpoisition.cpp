// Insert a node at the specific postion 
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    // constructor
    Node(int data1) {
     data = data1;
     next = nullptr;
    }
};

// Function to insert the node at the specific positon in the list
Node* insertAtPosition(Node* head, int position , int data) {
    Node* NewNode = new Node(data);

    // if inserting  at the beginning
    if(position == 1) {
        NewNode->next = head;
        head = NewNode;
        return head;
    }

    Node* current  = head;
    // traverse the list to find  the node before the insertion point
    for(int i = 1; i <position -1 && current!=nullptr; i++) {
    current = current->next;
    }

    // if the position is out of bound
    if(current == nullptr) {
        cout<< "Position  is out of bound." << endl;
        delete NewNode;  // deallocate the memory  to prevent memory leak
        return  head;
    }
  // insert  the new node at the specified  positon 
    NewNode->next = current->next;
    current->next = NewNode;
    return head;
}

void printlist(Node*head) {
    while(head!=nullptr) {
     cout << " " << head->next << endl;
     cout << " " << head->data << endl;
     head = head->next;
    }
    cout << endl;
}

int main() {
    // creating a list 3,5,8,10
    Node* head = new Node(3);
    head->next = new Node(5);
    head->next->next = new Node(8);
    head->next->next->next = new Node(10);
    cout << "Linked list  before the  insertion ";
    printlist(head);

    // inserting a new node data
    int data = 12, pos = 2;
    head = insertAtPosition(head,pos, data);
    cout<<"Linked list after the insertion of new node ";
    printlist(head);
    return 0;

}


