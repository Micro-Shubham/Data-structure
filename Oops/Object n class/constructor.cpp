// invovked automatically
// constructor names should same as class name
// doesn't need any return type
// used to initilaize the value
#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // create  default contructor
    Customer()
    {
        name = "rohit";
        account_number = 354215;
        balance = 34546524;
    }
    void display()
    {
        cout << name << endl;
        cout << account_number << endl;
        cout << balance << endl;
    }
};
int main()
{
    Customer A1;
    A1.display();

    return 0;
}