#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct CustomComparator {
    bool operator()(const int& lhs, const int& rhs){
        // Ascending Order - Min Heap
        // return lhs > rhs;
        // Descending Order - Max Heap
        return lhs < rhs;
    }
};
int main() {
    priority_queue<int, vector<int>, CustomComparator> customHeap;
    customHeap.push(20);
    customHeap.push(10);
    customHeap.push(30);
    while (!customHeap.empty()){
        cout << customHeap.top() << " ";
        customHeap.pop();
    }cout << endl;
    return 0;
}
