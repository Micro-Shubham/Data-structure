#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // it contain only unique element
    // search , insert and removal have avaerage constant time complexity  O(1)
    // it uses hashing technique to achieve it
    //  store and output in any order
    unordered_set<int> s;
    s.insert(20);
    s.insert(20);
    s.insert(80);
    s.insert(10);
    s.insert(30);
    s.insert(50);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}