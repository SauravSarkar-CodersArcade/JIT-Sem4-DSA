#include <iostream>
using namespace std;
class JIT {
    double d; // 8 bytes
    int i; // 4 bytes
    short s; // 2 bytes
    char c; // 1 byte
};
int main() {
    JIT obj;
    cout << "Size of the class is: " << sizeof(obj) << " Bytes" << endl;
    return 0;
}
