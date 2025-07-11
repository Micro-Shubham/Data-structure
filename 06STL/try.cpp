#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> s;
    s.insert(39);
    s.insert(39);
    s.insert(39);
    s.insert(31);
    s.insert(39);
    s.insert(39);
    s.insert(35);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
