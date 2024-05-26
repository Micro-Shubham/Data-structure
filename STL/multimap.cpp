#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // allow multi key
    multimap<int, int> m;
    m.insert(make_pair(20, 49));
    m.insert(make_pair(20, 49));
    m.insert(make_pair(10, 49));
    m.insert(make_pair(10, 49));
    m.insert(make_pair(40, 49));
    m.insert(make_pair(50, 49));
    m.insert(make_pair(30, 49));
    m.erase(20);
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "   " << it->second << endl;
    }
    return 0;
}