#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows & cols:" << endl;
    cin >> n;
    int ** twoD = new int * [n]; // n rows
    for (int i = 0; i < n; ++i) {
        twoD[i] = new int[n]; // Each row of n columns
        for (int j = 0; j < n; ++j) {
            cin >> twoD[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << twoD[i][j] << " ";
        }cout << endl;
    }
    delete [] twoD;
    return 0;
}
