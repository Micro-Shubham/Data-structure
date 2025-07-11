/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            char alfha = 'a' + (col - 1);
            cout << alfha << " ";
        }
        cout << endl;
    }
    return 0;
}