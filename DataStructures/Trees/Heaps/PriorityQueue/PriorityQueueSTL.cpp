#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(1);
    maxHeap.push(13);
    maxHeap.push(11);
    maxHeap.push(0);
    cout << "Max Heap: ";
    while (!maxHeap.empty()){
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    // For min heap we need to use a comparator -> greater()
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(0);
    minHeap.push(12);
    minHeap.push(18);
    cout << "Min Heap: ";
    while (!minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }cout << endl;
    return 0;
}
