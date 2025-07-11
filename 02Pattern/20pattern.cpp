/*
        1
      1 2 
    1 2 3 
  1 2 3 4
1 2 3 4 5 
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            if (col <= 5 - row)
            cout << " " << " ";
            else 
            cout << col-(5-row)    << " ";
        }
        cout << endl;
    }
    return 0;
}