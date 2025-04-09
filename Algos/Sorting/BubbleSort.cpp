#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for (int i = 1; i < n; ++i) { // No of iterations
        for (int j = 0; j < n-1; ++j) { // Go till second last
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
    int arr[] = {7,6,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}
