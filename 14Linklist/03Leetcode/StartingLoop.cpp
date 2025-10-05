#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;
Node(int new_data) {
    this->data = new_data;
    next = nullptr;
}
};

Node *cyclestart(Node *head) {
    Node *slowptr = head;
    Node *fastptr = head;
    while(fastptr != nullptr && fastptr->next != nullptr) {
        // move fast pointer by two node
        fastptr = fastptr->next->next;
        // move slow pointer by one node
        slowptr = slowptr->next;
        if(slowptr == fastptr) {
            slowptr = head;
            while(slowptr != fastptr) {
                slowptr = slowptr->next;
                fastptr = fastptr->next;

            }
            return slowptr;

        }
    }
    return nullptr;
}
int main() {
  
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    head->next->next->next->next->next = head->next->next;

    Node* loopNode = cyclestart(head);
    if (loopNode != nullptr)
        cout << "Cycle starts at node with value: " << loopNode->data << endl;
    else
        cout << "No cycle detected" << endl;
    
    return 0;
}