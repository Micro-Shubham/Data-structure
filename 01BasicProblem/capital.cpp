#include <iostream>
using namespace std;
// program to change small letter to capital letter

char convert(char alpha)
{
    char ans = alpha - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout << "Enter the Letter:" << endl;
    cin >> name;
    cout << convert(name) << endl;
}