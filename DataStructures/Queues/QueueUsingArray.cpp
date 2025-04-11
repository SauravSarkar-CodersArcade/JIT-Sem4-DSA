#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    bool isFull(){
        return (rear == MAX_SIZE -1);
    }
    void enqueue(int item){
        if (isFull()){
            cout << "Queue is full." << endl;
        }
        else if (isEmpty()){
            front = rear = 0;
        } else{
            rear++;
        }
        arr[rear] = item;
        cout << "Enqueued item is: " << item << endl;
    }
    void dequeue(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
        } else if (front == rear){
            front = rear = -1;
        } else{
            front++;
        }
    }
    int frontElement(){
        if (isEmpty()){
            cout << "Empty Queue." << endl;
            return -1;
        }
        return arr[front];
    }
    int rearElement(){
        if (isEmpty()){
            cout << "Empty Queue." << endl;
            return -1;
        }
        return arr[rear];
    }
    void display(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }cout << endl;
    }
};
int main() {
    Queue queue;
    int arr[] = {1,3,5,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        queue.enqueue(arr[i]);
    }
    queue.display();
    queue.dequeue();
    queue.display();
    cout << queue.frontElement() << " "<< queue.rearElement() << endl;
    return 0;
}
