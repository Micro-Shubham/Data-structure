// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array
// find the largest element in the given array list
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 5, 7, 3};
    cout << "enter the number you want to find :" << endl;
    int largestElement = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largestElement)
        {
            largestElement = arr[i];
        }
    }
    cout << "The  largest element is : " << largestElement << endl;
    return 0;
}