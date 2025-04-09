#include <iostream>
using namespace std;
int hammingWeight(int n){
    int count = 0;
    while (n > 0){
        if (n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main() {
    cout << "HammingWeight(11):" << hammingWeight(11) << endl;
    cout << "HammingWeight(5):" << hammingWeight(5) << endl;
    cout << "HammingWeight(10):" << hammingWeight(10) << endl;
    cout << "HammingWeight(0):" << hammingWeight(0) << endl;
    return 0;
}
