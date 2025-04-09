#include <iostream>
using namespace std;
int KadaneAlgo(int arr[], int n){
    int cmax = arr[0];
    int gmax = arr[0];
    for (int i = 1; i < n; ++i) {
//        cmax = (arr[i] > cmax + arr[i] ? arr[i] : cmax + arr[i]);
//        if (cmax > gmax){
//            gmax = cmax;
//        }
        cmax = max(arr[i], cmax + arr[i]);
        gmax = max(cmax, gmax);
    }return gmax;
}
int main() {
    int arr[] = {5,-8,4,1,-1,2};
    cout << "Max Subarray Sum: " << KadaneAlgo(arr, 6) << endl;
    return 0;
}
