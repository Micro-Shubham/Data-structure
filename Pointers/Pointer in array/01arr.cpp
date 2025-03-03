#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // print the address of  first element

    cout << arr << endl;
    // will be same as above
    cout << arr + 0 << endl;
    // another method
    cout << &arr[0] << endl;
    cout << ptr << endl; // print the value arr[0]
    cout << *ptr << endl;
    // print the address of second element or index at 1
    cout << arr + 1 << endl;
    ptr = &arr[1];
    cout << ptr << endl;
    return 0;
}