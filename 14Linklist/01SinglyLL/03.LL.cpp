#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    int* next;
    // constructor
    Node(int data1, int* next1) {
        data = data1;
        next = next1;
    }

    // constructor
    Node (int data1) {
        data = data1;
        next = nullptr;
    }
};
int main()
{
   vector<int> arr= {2,3,4,5,8};
    Node x = Node(arr[0],nullptr);
    Node *y = &x;
    cout << y->data << endl;
}