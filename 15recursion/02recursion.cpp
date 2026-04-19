#include <iostream>
using namespace std;
void fun(int n ) {
    if(n == 1) {
        cout<< n << endl;
        return;
    }
    cout<< n << endl;
    fun(n-1);
}
int main() {
 // print n to 1 using recursive call

 int n = 10;
 fun(n);
 return 0;
}