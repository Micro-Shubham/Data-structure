/*
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            int mul = col * col;
            cout << mul << " ";
        }
        cout << endl;
    }
    return 0;
}