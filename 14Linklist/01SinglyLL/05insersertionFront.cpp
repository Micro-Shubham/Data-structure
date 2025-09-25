#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node (int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// function to insert  a new node  at the beginning of the list
Node* insertAtFront (Node* head, int  new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = head;
    return new_node;
}

void printList(Node* head) {
    Node* curr= head;
    while(curr!=nullptr) {
        cout<< " " << curr->data;
        curr= curr->next;
    }
    cout << endl;
}
int main()   
{
    // Create the linked list 2->3->4->5
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    // Print the original list
    cout << "Original Linked List:";
    printList(head);

    // Insert a new node at the front of the list
    cout << "After inserting Nodes at the front:";
    int data = 1;
    head = insertAtFront(head, data);

    // Print the updated list
    printList(head);

    return 0;
}