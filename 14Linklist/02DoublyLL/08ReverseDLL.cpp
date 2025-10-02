#include<iostream>
using namespace std;
struct Node{
 int data;
 Node *next, *prev;
 Node(int new_data) {
    data = new_data;
    next = prev = nullptr;
 }
};

Node *reverse(Node *head) {
    // if the list is empty or has  only one  node then return head
    if(head == nullptr || head->next == nullptr) {
       return head; 
    }

    Node *prevNode = nullptr;
    Node *currNode = head;
    
    // Traverse the list and reverse the list

    while(currNode != nullptr) {
        // swap the next and prev  pointer
        prevNode = currNode->prev;
        currNode->prev = currNode->next;
        currNode->next = prevNode;

        // Move to the next  node in the original list
        // (which is now previous due to revresal)
        currNode = currNode->prev;
    }
    return prevNode->prev;
}
void printList(Node *node) {
    while (node != nullptr) {
        cout << node->data;
        if(node->next != nullptr){
            cout << " <-> ";
        }
        node = node->next;
    }
    cout << endl;
}

int main() {
  
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
   
    head = reverse(head);
    printList(head);
    return 0;
}