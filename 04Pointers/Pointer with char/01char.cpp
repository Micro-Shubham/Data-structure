#include <iostream>
using namespace std;
int main()
{
    char arr[5] = {'a', 'b', 'c', 'd'};
    char *ptr = arr;
    cout << ptr << endl;
    cout << arr << endl;
    // to print the address
    cout << (void *)arr << endl;
    cout << (void *)ptr << endl;
    return 0;
}