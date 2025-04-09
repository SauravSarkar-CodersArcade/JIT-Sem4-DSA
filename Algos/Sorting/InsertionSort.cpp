#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp){
            // Shift operation
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp; // Place the temp value in the gap created
    }
}
int main() {
    int arr[] = {3,2,6,8,1,5,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}
