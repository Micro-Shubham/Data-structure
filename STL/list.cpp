#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list
    list<int> ls;
    ls.push_back(20);
    ls.push_front(30);
    ls.push_back(40);
    ls.push_front(50);
    cout << ls.front() << " front value" << endl;
    cout << ls.back() << " back value" << endl;
    cout << ls.size() << "  size of doubly linked list" << endl;
    return 0;
}