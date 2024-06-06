#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 45, 56, 7, 8};
    int index = -1, n;
    cout << " Enter the element you want find : " << endl;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            index = arr[i];
            cout << " The element find at index : " << i << endl;
            break;
        }
    }
    cout << "Element not found " << index;
    return 0;
}