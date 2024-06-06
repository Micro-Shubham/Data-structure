#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {43, 56, 7, 86, 245};
    int ans = INT_MIN;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }
    cout << " The maximum element is " << ans << endl;
    return 0;
}