#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // print all the value using pointer
    // we can perform increament/decrement or airthmetic operation as well
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }
    // print all the address
    for(int i = 0; i < 5; i++)
    {
        cout << ptr+i << endl;
    }

    // print all the value 
    for(int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}