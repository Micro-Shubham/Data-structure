#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // v(size of array, each element is 1);
    vector<int> v(5, 1);
    cout << "The size of v; " << v.size() << endl;;
    cout << "The capacity of v: " << v.capacity();
    return 0;
}