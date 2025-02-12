// invovked automatically
// constructor names should same as class name
// doesn't need any return type
// used to initilaize the value
#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account;
    int balance;

public:
    // create contructor
    Customer()
    {
        cout << " hello costomer"; 
    }
};
int main()
{
    Customer A1;

    return 0;
}