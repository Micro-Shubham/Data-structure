#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set - store unique data ; repeatation not allowed
    // store value in sorted order
    // insertation , deletion , search operation  in (O(logn))
    // implementation using red black tree
    // we can make descending order

    set<int> item;
    item.insert(20);
    item.insert(40);
    item.insert(90);
    item.insert(80);
    item.insert(50);
    item.insert(40);
    for (auto it = item.begin(); it != item.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}