/*
      1
    2 2 
  3 3 3
4 4 4 4 
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            if(col <= 4-row)
            cout << " ";
            else
            cout << row;
        }
        cout << endl;
    }
    return 0;
}