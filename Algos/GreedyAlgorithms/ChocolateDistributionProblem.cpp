#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long findMinDiff(vector<long long> a,
                          long long n, long long m){
        sort(a.begin(), a.end()); // Sort the given array
        int i = 0;
        int j = m - 1;
        int mini = INT_MAX;
        while (j < a.size()){
            int diff = a[j] - a[i];
            mini = min(mini, diff);
            i++;
            j++;
        }
        return mini;
    }
};
int main() {
    Solution solution;
    vector<long long> a = {7,3,2,4,9,12,56};
    long long n = a.size();
    long long m = 3;
    long long result = solution.findMinDiff(a,n,m);
    cout << "Minimum difference is: " << result << endl;
    return 0;
}
