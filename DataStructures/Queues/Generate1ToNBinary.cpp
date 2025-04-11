#include <bits/stdc++.h>
using namespace std;
void generateBinaryNumbers(int N){
    queue<string> q;
    q.push("1");
    while (N--){
        string curr = q.front();
        q.pop();
        cout << curr << " ";
        q.push(curr + "0");
        q.push(curr + "1");
    }
}
int main() {
    int N = 5;
    generateBinaryNumbers(N);
    return 0;
}
