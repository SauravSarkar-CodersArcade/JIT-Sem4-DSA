#include <iostream>
using namespace std;

int main() {
    int arr[] = {23,12,19,4,0,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << *arr << " " << *(arr + 1) << endl;
    for (int i = 0; i < size; ++i) {
        cout << *arr + i << " ";
    }
    return 0;
}
