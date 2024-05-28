#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(23);
    v.push_back(203);
    v.push_back(243);
    v.push_back(2312);
    v.push_back(234);
    v.push_back(2345);
    // insert new element at any index
    v.insert(v.begin() + 2, 50);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}