#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of array" << endl;
    cin >> n;
    cout << "Enter the value of elemen" ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number you want to find number of repetition ";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}