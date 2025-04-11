#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums){
    stack<int> st;
    vector<int> res(nums.size(), -1); // -1 -1 -1 -1
    for (int i = nums.size()-1; i >= 0; --i) {
        while (!st.empty() && st.top() <= nums[i]){
            st.pop();
        }
        if (!st.empty()) res[i] = st.top();
        st.push(nums[i]);
    }
    return res;
}
int main() {
    vector<int> arr = {4,5,2,25};
    vector<int> res = nextGreaterElement(arr);
    for (int i : res) {
        cout << i << " ";
    }cout << endl;
    return 0;
}
