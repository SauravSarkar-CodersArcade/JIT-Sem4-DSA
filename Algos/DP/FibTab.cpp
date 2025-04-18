#include <iostream>
#include <vector>
using namespace std;
int fibonacciTab(int n){
    // Step 1 Create the dp array n+1 all values -1
    vector<int> dp(n+1,-1);
    // Step 2 Store the known values
    dp[1] = 1;
    dp[0] = 0;
    // step 3 Calculate the remaining values
    for (int i = 2; i <=n ; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main() {
    int n;
    cin >> n;
    cout << fibonacciTab(n);
    return 0;
}
