#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    int arr[] = {7,6,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}
