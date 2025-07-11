/*
a
b b
c c c
d d d d
e e e e e
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        char alfha = 'a' + (row - 1);
        for (int col = 1; col <= row; col++)
        {
            cout << alfha << " ";
        }
        cout << endl;
    }
    return 0;
}