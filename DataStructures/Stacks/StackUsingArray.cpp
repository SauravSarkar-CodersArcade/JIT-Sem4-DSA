#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack(){
        top = -1; // Initially stack is empty
    }
    void push(int element){
        if (top == MAX_SIZE - 1){
            cout << "Stack Overflow." << endl;
        } else{
            top++;
            arr[top] = element;
        }
    }
    void pop(){
        if (top == -1){
            cout << "Stack Underflow." << endl;
        } else{
            top--;
        }
    }
    int peek(){
        if (top == -1){
            cout << "Stack Underflow." << endl;
            return -1; // Invalid Data
        } else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top == -1;
    }
    int size(){
        return top + 1;
    }

};
int main() {
    Stack stack = Stack();
    int arr[] = {3,1,4,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        stack.push(arr[i]);
    }
    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element: " << stack.peek() << endl;
    cout << stack.isEmpty() << endl;
    cout << "Size: "  << stack.size() << endl;
    return 0;
}
