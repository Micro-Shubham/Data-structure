#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list
    // push_front(), push_back() , size(), pop_front() , pop_back();
    // iterator
    list<int> ls;
    ls.push_back(20);
    ls.push_front(30);
    ls.push_back(40);
    ls.push_front(50);
    ls.pop_back();
    ls.pop_front();
    cout << ls.front() << " front value" << endl;
    cout << ls.back() << " back value" << endl;
    cout << ls.size() << "  size of doubly linked list" << endl;
    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " value " << endl;
    }
    // reverse order
    for (auto rev = ls.rbegin(); rev != ls.rend(); rev++)
    {
        cout << "reverse order " << *rev << endl;
    }
    return 0;
}