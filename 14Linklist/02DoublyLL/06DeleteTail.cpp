#include<iostream>
using namespace std;
struct Node{
 int data;
 Node *next , *prev;   
 Node(int new_data) {
    data = new_data;
    next = prev = nullptr;
 }
};

// Function to delete the tail of a node
void DeleteTail(Node *&head) {
    // check if the list is empty
    if(head == nullptr) {
        cout<<"List is empty, nothing to delete:";
        return;
    }

    // check if its contain only on element
    if(head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    // traverse to the tail
    Node *temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
int main() {

    // Create a simple linked list: 3 -> 12 -> 15 -> 18
    Node *head = new Node(3);
    head->next = new Node(12);
    head->next->next = new Node(15);
  	head->next->next->next = new Node(18);
    cout << "Original List: ";
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    DeleteTail(head); // Deleting the tail node

    cout << "List after deleting head: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}