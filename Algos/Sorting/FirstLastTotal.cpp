#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while (s <= e){
        int mid = s + (e-s)/2;
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1; // Go to the extreme left for first occ
        } else if (arr[mid] < key){
            s = mid + 1;
        } else{
            e = mid - 1;
        }
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while (s < e){
        int mid = s + (e-s)/2;
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1; // Go to the extreme right for last occ
        } else if (arr[mid] < key){
            s = mid + 1;
        } else{
            e = mid - 1;
        }
    }
    return ans;
}
int totalOccurrence(int arr[], int n, int key){
    int fo = firstOccurrence(arr,n,key);
    int lo = lastOccurrence(arr,n,key);
    int to = lo - fo + 1;
    return to;
}
int main() {
    int arr[] = {1,2,3,3,3,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int fo = firstOccurrence(arr,n, 3);
    int lo = lastOccurrence(arr,n,3);
    int to = totalOccurrence(arr,n,3);
    cout << "First Occurrence: " << fo << endl;
    cout << "Last Occurrence: " << lo << endl;
    cout << "Total Occurrence: " << to << endl;
    return 0;
}
