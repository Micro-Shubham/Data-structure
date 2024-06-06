#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {3, 4, 8, 7, 6};
    int largest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    int second;
    for (int i = 0; i < 5; i++)
    {
        if (largest != arr[i])
            second = max(second , arr[i]);
    }
    cout<< second << endl;
}