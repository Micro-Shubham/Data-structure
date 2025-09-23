#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data; // data value
    Node *next; // pointer to the next value
    //
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    vector<int> arr = {1, 4, 4, 5, 4};
    // creating a new node and what new does is it store the memory location 
    Node* y = new Node(arr[1], nullptr);
    // creating a object
    Node x = Node(arr[1], nullptr);
    cout << y << endl;;
    cout << x.next<< endl;
    cout << y->data<<endl;
}
