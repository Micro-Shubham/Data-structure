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
    // Parameterised constructor
    Customer(string n, int b, int c)
    {
        name = n;
        account_number = b;
        balance = c;
    }
    // constructor overloading
    Customer( string n , int b) 
    {
        name = n;
        balance = b;
    }
    // inline constructor
    // inline Customer(string nam, int bal, int acc):name(nam),balance(bal),account_number(acc){}
    void display()
    {
        cout << name << endl;
        cout << account_number << endl;
        cout << balance << endl;
    }
};
int main()
{
    Customer A1, A2, A3;
    A1.display();
    A2.display();
    A3.display();
    Customer A4("mohit", 1000, 4);
    A4.display();

    return 0;
}