#include <iostream>
using namespace std;
int merge(int arr[], int left, int mid, int right){
    int temp[1000];
    int i = left, j = mid+1, k = 0;
    int invCount = 0;
    while (i <= mid && j <= right){
        if (arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        } else{
            temp[k++] = arr[j++];
            invCount += mid - i + 1;
        }
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (int p = 0; p < k; ++p) {
        arr[left + p] = temp[p];
    }
    return invCount;
}
int mergeSort(int arr[], int left, int right){
    int invCount = 0;
    if (left < right){
        int mid = (left + right)/2;
        invCount += mergeSort(arr,left,mid);
        invCount += mergeSort(arr,mid+1,right);
        invCount += merge(arr,left,mid,right);
    }
    return invCount;
}
int main() {
    int arr[] = {5,3,2,4,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = mergeSort(arr,0,size-1);
    cout << "Inversion Count: " << count << endl;
    return 0;
}
