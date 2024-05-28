#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(23);
    v.push_back(231);
    v.push_back(230);
    v.push_back(243);
    v.push_back(234);
    // erase : this will help to remove element from anywhere
    v.erase(v.begin() + 3);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}