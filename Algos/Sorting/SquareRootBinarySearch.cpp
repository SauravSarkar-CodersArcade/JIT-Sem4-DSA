#include <iostream>
using namespace std;
int binarySearchSquareRoot(int n){
    int s = 0;
    int e = n;
    int ans = -1;
    while (s < e){
        int mid = s + (e-s)/2;
        int square = mid * mid;
        if (square == n){
            return mid;
        } else if (square > n){
            e = mid - 1;
        } else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}
int main() {
    cout << binarySearchSquareRoot(36) << endl;
    // int arr[10] = {[0 ... 9] = 1};
    int arr[10];
    fill(arr, arr+10, 10);
    cout << arr[9] << endl;
    cout << INT_MAX + 1 << endl;
    cout << INT_MIN - 1 << endl;
    return 0;
}
