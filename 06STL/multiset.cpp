#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // multiset allow to store duplicate element in set in ascending order
    multiset<int> s;
    s.insert(40);
    s.insert(40);
    s.insert(48);
    s.insert(90);
    s.insert(50);
    s.insert(5);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
