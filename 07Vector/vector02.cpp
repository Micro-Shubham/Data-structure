#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // v(size of array, each element is 1);
    vector<int> v(5, 1);
    cout << "The size of v; " << v.size() << endl;
    cout << "The capacity of v: " << v.capacity() << endl;
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
    cout << "The size of v; " << v1.size() << endl;
    cout << "The capacity of v: " << v1.capacity();
    

    return 0;
}