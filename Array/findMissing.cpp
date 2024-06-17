#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 2, 3, 3};
    // finding the number that appear only oncs
    cout << " Hello there " << endl;
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        int num = arr[i];
        for (int j = 0; j < 5; j++)
        {
            if (num == arr[j])
                count++;
        }
        if (count == 1)
            cout << " the element that appear only once : " << arr[i] << endl;
    }
    return 0;
}