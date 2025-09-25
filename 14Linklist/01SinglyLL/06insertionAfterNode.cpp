#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
  Node (int value) {
    data = value;
    next = nullptr;
  }
};

// function to insert a node after the given node(
Node* insertNode(Node* head, int key, int newData) {
    // initialize the curr pointer to head
    Node* curr = head;

    // Iterate over the linkedlist to find the key
    while(curr!=nullptr) {
        if(curr->data == key) {
            break;
        }
            curr = curr->next;
    }

    if(curr ==nullptr) {
        return head;
    }

    Node* NewNode = new Node(newData) ;
        NewNode->next = curr->next;
        curr->next = NewNode;
        return head;

}

void printlist(Node* node) {
while(node!= nullptr) {
    cout << node->data<< " ";
    node = node->next;
   }
   cout << endl;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    cout << " original linkedlist << " << endl;
    printlist(head);

    int key = 3, newData = 9;
    head = insertNode(head, key, newData);
    cout << "updated linkeslist " << endl;
    printlist(head);
    return 0;
}
