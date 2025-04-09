#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3}; // 1 2 3 0 0
    // 4 + 4 = 8 bytes
    // cout << arr[4];
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int * oneD = new int[n]; // This creates a 1D array of n size
    cout << "Enter the " << n << " array elements: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "The array elements are: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }cout << endl;
    delete [] oneD;
    return 0;
}
