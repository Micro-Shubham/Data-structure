/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - row; col++)
        {
            cout << " " <<" ";
        }
        for (int num = row; num >= 1; num--)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}