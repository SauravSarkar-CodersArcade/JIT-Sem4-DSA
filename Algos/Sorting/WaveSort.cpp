#include <iostream>
#include <algorithm>
using namespace std;
void waveSort(int arr[], int n){
    sort(arr, arr+n);
    for (int i = 0; i < n-1; i+=2) {
        swap(arr[i], arr[i+1]);
    }
}
int main() {
    int arr[] = {10,90,49,2,1,5,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    waveSort(arr,n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }cout << endl;
    int a[5];
    fill(a,a+5,10);
    cout << a[4];
    return 0;
}
