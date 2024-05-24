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
    return 0;
}