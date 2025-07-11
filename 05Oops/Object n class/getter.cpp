#include <iostream>
using namespace std;
// class
class Student
{
    string name;
    int age;

public:
    // setter
    void setname(string n)
    {
        name = n;
    }
    void setage(int a)
    {
        age = a;
    }
    // getter method
    void getname()
    {
        cout << name << endl;
    }
    void getage()
    {
        cout << age << endl;
    }
};
int main()
{
    Student s1;
    s1.setname("rohit");
    s1.setage(10);
    s1.getname();
    s1.getage();
    return 0;
}