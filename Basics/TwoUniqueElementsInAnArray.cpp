#include <iostream>
using namespace std;
void printTwoUniques(int arr[], int n){
    int xorAll = 0;
    for (int i = 0; i < n; ++i) {
        xorAll ^= arr[i];
    }
    int rightMostSetBit = xorAll & -xorAll;
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < n; ++i) {
        if ((arr[i] & rightMostSetBit) == 0){
            num1 ^= arr[i]; // Group of nums ending with last bit 0
        } else{
            num2 ^= arr[i]; // Group of nums ending with last bit 1
        }
    }
    cout << "The two unique numbers are: "
    << num1 << "," << num2;
}
int main() {
    int arr[] = {1,2,3,4,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoUniques(arr,n);
    return 0;
}
