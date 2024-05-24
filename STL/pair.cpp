#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // name , age , weight
    pair<string, pair<int, int>> userData;
    userData.first = "shubham";
    userData.second.first = 20;
    userData.second.second = 70;
    cout << userData.first << " " << userData.second.first << " " << userData.second.second;
    return 0;
}