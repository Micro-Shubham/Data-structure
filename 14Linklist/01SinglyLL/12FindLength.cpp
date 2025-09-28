#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// function to find the length of linked list
int lengthOfList(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        temp = temp->next;
        cnt++;

    }
    return cnt;
}

int main(){
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    int listlength=     lengthOfList(head);
    cout <<"The length of a linked list : " << listlength << endl;
    return 0;
   
}
