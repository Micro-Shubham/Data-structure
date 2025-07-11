#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // It store data  in key-value  pair
    // It uses Red-black tree or AVL tree for implementation
    //  insert,delete , search operation  O(log(n))
    // key should be unique
    //  map create
    map<int, int> m;
    m.insert(make_pair(30, 40));
    m.insert(make_pair(50, 40));
    m.insert(make_pair(10, 40));
    m.insert(make_pair(80, 40));
    m.insert(make_pair(20, 40));
    m.insert(make_pair(30, 40));
    // insert another method but also update
    m[100] = 50;
    // remove element
    m.erase(20);
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "  " << it->second << endl;
    }
    return 0;
}