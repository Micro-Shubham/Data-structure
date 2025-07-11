#include <iostream>
using namespace std;
// create a class
class Student
{ // default all are private
  // public access modifier
public:
    string name;
    int age, roll_number;
    string grade;
};
int main()
{
    // object
    Student s1;
    s1.name = "Rohit";
    s1.age = 4;
    s1.roll_number = 5;
    s1.grade = "A";
    cout << s1.name << " " << s1.age << endl;
    return 0;
}