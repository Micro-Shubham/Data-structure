#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set in descending order
    set<int, greater<int>> s;
    s.insert(20);
    s.insert(20);
    s.insert(209);
    s.insert(28);
    s.insert(2);
    s.insert(24);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    // finding number is present or not
    if (s.find(20) != s.end())
    {
        cout << "Present " << endl;
    }
    else
    {
        cout << "Absent " << endl;
    }
    // another method for finding the element is present or not
    if (s.count(24))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
    return 0;
}