#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - row; col++)
        {
            cout << " ";
        }
        for (char nam = 'A'; nam <= 'A' + row - 1; nam++)
        {
            cout << nam;
        }
        cout << endl;
    }
    return 0;
}