#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};
Node* mergeSortedLists(Node* l1, Node* l2){
    Node dummy(0);
    Node* tail = &dummy;
    while (l1 && l2){
        if (l1->data < l2->data){
            tail->next = l1;
            l1 = l1->next;
        } else{
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = (l1 ? l1 : l2);
    return dummy.next;
}
void printListElements(Node* head){
    while (head){
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null";
}
int main() {
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->next = new Node(5);
    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->next = new Node(6);
    Node* merged = mergeSortedLists(l1,l2);
    printListElements(merged);
    return 0;
}
