// They are attributes of classes or class member
#include <iostream>
using namespace std;
// create class
class Customer
{
    string name;
    int account;
    int balance;
    static int totoal_customer;

public:
    Customer(string name, int account, int balance)
    {
        this->name = name;
        this->account = account;
        this->balance = balance;
        totoal_customer++;
    }
    // display customer
    void display_customer()
    {
        cout << name << " " << account << " " << balance << endl;
    }
    void display_total_customer()
    {
        cout << "Total Customer:" << totoal_customer << endl;
    }
};
// totoal customer using scop resolution ::
int Customer::totoal_customer = 0;
int main()
{
    Customer A1("Rohit", 1, 1000);
    Customer A2("Mohit", 2, 2000);
    Customer A3("Shohit", 3, 3000);
    A1.display_customer();
    A2.display_customer();
    A3.display_customer();
    A1.display_total_customer();
    return 0;
}