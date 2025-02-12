#include <iostream>
#include <vector>

using namespace std;
// Function for least weights
int leastWeightCapacity(int weights[], int n, int days)
{
    int start = 0, end = 0;
    // Calculating sum of all weights
    for (int i = 0; i < n; i++)
    {
        end += weights[i];
        start = max(start, weights[i]);
    }
    // Performing binary search for finding the least weights
    while (start <= end)
    {
        int mid = (start + end) / 2, need = 1, curr = 0;
        // Iterate over the weight and checking if the
        // current ship can carry  up to  the mid weight
        for (int i = 0; i < n && need < days; i++)
        {
            curr += weights[i];
            if (curr + weights[i] > mid)
            {
                // if the current ship cannot carry  the
                // current weight , we need use a new ship
                // and reset the  current weight
                curr = 0, need++;
            }
            if (need > days)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
    }
    return start;
}

// Driven Code
int main()
{
    int weights[] = {1, 2, 3, 4, 3, 5, 6, 7};
    // number  of days
    int days = 5;
    int n = sizeof(weights) / sizeof(weights[0]);
    cout << leastWeightCapacity(weights, n, days) << endl;
    return 0;
}