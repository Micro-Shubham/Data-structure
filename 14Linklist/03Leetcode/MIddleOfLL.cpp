#include <iostream>
using namespace std;
struct Node {
int data;
Node *next;
Node(int new_data) {
    this->data = new_data;
    next = nullptr;
}
};

// Function to find the middle of the linked list
int getMiddle(Node *head) {
    Node *slowptr = head;
    Node *fastptr = head;
    while(fastptr != nullptr && fastptr->next != nullptr) {
        // MOVE THE FASTPTR BY TWO NODES
        fastptr = fastptr->next->next;

        // MOVE THE SLOWPTR BY ONE NODE
        slowptr = slowptr->next;
    }
    return slowptr->data;
}
int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout << getMiddle(head) << endl;

    return 0;
}