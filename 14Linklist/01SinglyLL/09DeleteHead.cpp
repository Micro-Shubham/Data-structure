// Deletion of a head node in a linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

// Function to delete the head node
void DeleteHead(Node *&head) {
  if(head== nullptr) {
    cout<<"List is empty nothing to delete "<<endl;
    return ;
  }

  // store the current head in a temporary  variable
  Node *temp = head;

  // Move the head to the next node
  head = head->next;
  delete temp;

}
void printlist (Node* head) {
    while(head != nullptr) {
        cout<< head->data;
        head = head->next;
    }
    cout<< endl;

}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "List before the deletion:";
    printlist(head);
    DeleteHead(head);
    cout<<"List after the deletion: ";
    printlist(head);
    return 0;

}