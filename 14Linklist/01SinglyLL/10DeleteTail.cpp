// Deletion of a tail from the tail of a node
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
     
  public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to delete the tail of a node
void DeleteNode(Node* &head) {
    // if the list is empty
    if(head == nullptr) {
        cout<<"List is empty, nothing to delete:"<<endl;
    }

    // check if it contain only one contain
    if(head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    // traverse to the tail of node
    Node* temp = head;
    while(temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

}
void printlist(Node* head)
{
   while(head != nullptr) {
    cout << head->data;
    head = head->next;
   }
   cout << endl;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "List before the deleting the node: ";
    printlist(head);
    DeleteNode(head);
    cout <<"List after the deletion of tail: ";
    printlist(head);
    return 0;
    

}