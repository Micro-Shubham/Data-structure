#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //decleration 
    vector < int > v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(0);
    v.push_back(4);
    v.push_back(8);
    cout << "The size of v: " << v.size() << endl;
    cout << "The capacity of v: " << v.capacity() << endl;
    return 0;
}