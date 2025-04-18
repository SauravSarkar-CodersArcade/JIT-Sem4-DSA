#include <iostream>
#include <vector>
using namespace std;
int fibonacciMemo(int n, vector<int>& dp){
    if (n == 0 || n == 1){
        return n;
    }
    // Step 3: if you have the answer, don't calculate, just return
    if (dp[n] != -1){
        return dp[n];
    }
    // Step 2: store the values in the dp array
    dp[n] = fibonacciMemo(n-1, dp) + fibonacciMemo(n-2,dp);
    return dp[n];
}
int main() {
    int n;
    cin >> n;
    // Step 1 create a dp array of n + 1 & initialise to -1
    vector<int> dp(n+1,-1);
    cout << fibonacciMemo(n,dp);
    return 0;
}
