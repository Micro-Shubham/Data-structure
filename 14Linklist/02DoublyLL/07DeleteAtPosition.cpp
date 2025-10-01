#include<iostream>
using namespace std;
struct Node{
int data;
Node *next, *prev;

Node(int new_data){
    data = new_data;
    next = prev = nullptr;
}
};

// Function to delete node at given position
void deleteAtPosition(Node*& head, int pos) {
    if (head == nullptr || pos < 1) {
        cout << "Invalid position or list is empty." << endl;
        return;
    }

    // Deleting head node
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Traverse to the node before the target position
    Node* current = head;
    for (int i = 1; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
    }

    // If position is greater than the number of nodes
    if (current == nullptr || current->next == nullptr) {
        cout << "Position exceeds list length." << endl;
        return;
    }

    // Delete the node at the target position
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
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

    deleteAtPosition(head, 2);  // Deleting node at position 3

    cout << "List after deleting head: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}