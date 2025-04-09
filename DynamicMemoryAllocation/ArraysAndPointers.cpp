#include <iostream>
using namespace std;
// Dangling Pointer
int * function(){
    static int a = 20; // Global
    return &a; // 2000
}
int main() {
    int * ptr = function(); // 2000
    cout << *ptr << endl;
    auto data = 2.5; // iterator
    return 0;
}
