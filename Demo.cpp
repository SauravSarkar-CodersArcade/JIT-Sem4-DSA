#include <iostream>
using namespace std;
int main() {
    int arr[] = {3,1,2,4,1,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result ^= arr[i];
    }
    cout << "The non-repeating element is: " << result << endl;
    return 0;
}
