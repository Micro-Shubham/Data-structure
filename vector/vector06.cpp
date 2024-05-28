#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(13);
    v.push_back(33);
    v.push_back(03);
    v.push_back(34);
    v.push_back(38);
    v.push_back(34);
    // print fist and last element
    cout << v.front() << endl;
    cout << v[v.size() - 1] << endl;
    return 0;
}