// A function that call itself again and again until certain condition meet
#include <iostream>
using namespace std;
void fun(int n ) {
    if(n == 0) {
        cout<< "Happy Birthday!"<< endl;
        return;
    }
    cout<<n << " days left for birthday"<< endl;
    fun(n-1);
}
int main() {
  int n = 5;
  fun(n);
    return 0;
}