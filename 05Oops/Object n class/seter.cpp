#include <iostream>
using namespace std;
// create class
class Student
{
    string name;
    int age;
    string grade;

public:
    // seter
    void setname(string n)
    {
        name = n;
    }
};
int main()
{
    Student s1;
    s1.setname("rohit");

    return 0;
}