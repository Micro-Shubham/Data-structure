// Deletion of a node from the given positon
#include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node* next;

 Node(int data1) {
    data = data1;
    next = nullptr;
 }
};

// function to delete the node 
void DeletePositionNode(Node* &head, int pos) {
    if(head == nullptr || pos<1) {
        cout <<"List is empty "<< endl;
        return;
    }

    // delete the head
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;

    }

    // Traverse to the node  before  the target  position 
    Node* current = head;
    for(int i = 0; i < pos -1&& current!=nullptr; i++) {
        current = current->next;
    }

    // if position is greater than the number  of nodes
    if(current == nullptr || current->next == nullptr) {
        cout<<"Positon exceeds list length:"<<endl;
        return;
    }

    // Delete the node at  the target position
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}

void printlist( Node* head)  {
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
    cout <<"List before the deletion: ";
    printlist(head);
    DeletePositionNode(head,3);
    cout<<"List after the deletion: ";
    printlist(head);

    return 0;

}