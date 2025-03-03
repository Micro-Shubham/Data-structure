#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    // print the address of a
    cout << &a << endl;
    // store the value address we need pointer
    int *ptr = &a;
    // print the address of a
    cout << ptr << endl;
    // print the value of a using pointer
    cout << *ptr << endl;

    return 0;
}