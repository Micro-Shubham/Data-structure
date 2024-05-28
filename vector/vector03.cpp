#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    //initialization 
    vector<int>v;
    //inseration 
    v.push_back(35);
    v.push_back(39);
    v.push_back(31);
    v.push_back(30);
    v.push_back(32);
    v.push_back(34);
    //loop 
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<< *it << "  "<< endl;
    }
    // deletion 
    v.pop_back();
     for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<< *it << "  "<< endl;
    }

    return 0;

}