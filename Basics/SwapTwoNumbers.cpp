#include <iostream>
using namespace std;
void swapTwoNumbers(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
template <typename T>
void swap_anything(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    char c = 'c', d = 'd';
    cout << "Before: a = " << a << " b = " << b << endl;
    swap_anything(a,b);
    cout << "After: a = " << a << " b = " << b << endl;
    cout << "Before: c = " << c << " d = " << d << endl;
    swap_anything(c,d);
    cout << "After: c = " << c << " d = " << d << endl;

    return 0;
}
