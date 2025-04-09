#include <iostream>
using namespace std;
void printPrimes(int n){
    int primes[100] = {0};
    for (int i = 2; i <= n; ++i) {
        if (primes[i] == 0){
            for (int j = i*i; j <=n ; j+=i) {
                primes[j] = 1;
            }
        }
    }
    for (int i = 2; i <=n ; ++i) {
        if (primes[i] == 0){
            cout << i << " ";
        }
    }
}
int main() {
    printPrimes(100);
    return 0;
}
