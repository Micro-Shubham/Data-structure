#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()

{
    // create new object for class
    // Node A1(4);
    // return 0;
    Node *Head;
    Head = new Node(4);
    cout << Head ->data << endl;
    cout << Head ->next << endl;
    
    return 0;
}