#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
    string name;

    bool operator<(const Person &other) const
    {
        return age > other.age;
    }
};
int main()
{
    set<Person> s;
    Person p1, p2, p3;
    p1.age = 20, p1.name = "shubham";
    p2.age = 40, p2.name = "yadav";
    p3.age = 50, p3.name = "yadav";
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it).age << "  " << (*it).name << endl;
    }
    return 0;
}
