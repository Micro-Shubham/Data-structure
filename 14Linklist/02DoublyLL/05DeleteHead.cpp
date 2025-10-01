#include <iostream>
using namespace std;
struct Node{
 int data;
 Node *next, *prev;

 Node(int new_data) {
    data = new_data;
    next = prev = nullptr;

 }
};

// Function to delete the head of node
void deleteHead (Node *&head) {
    if(head == nullptr) {
        cout<<"List is empty, nothing to delete"<< endl;
        return ;
    }

    // store the current head in a temporary variable
    Node* temp = head;
    head = head->next;
    delete temp;

}

void printlist(Node *head) {
    while(head != nullptr) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<< endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    cout<<"List before the deletion: ";
    printlist(head);
    deleteHead(head);
    cout<<"List after the deletion: ";
    printlist(head);
    return 0;
}