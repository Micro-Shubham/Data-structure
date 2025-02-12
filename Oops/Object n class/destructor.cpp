#include <iostream>
using namespace std;
class Customer
{
    string name;
    int *data;

public:
    Customer()
    {
        name = "rohit";
        data = new int;
        *data = 10;
        cout << "constructor is called" << endl;
    }
    // Create destrucotr
    ~Customer()
    {
        delete data;
        cout << "Destrucotr is called " << endl;
    }
};
int main()
{
    Customer a1;
    return 0;
}