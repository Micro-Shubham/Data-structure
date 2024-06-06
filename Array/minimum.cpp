#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int ans = INT_MAX;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    cout << "The minimum element is " << ans << endl;
    return 0;
}