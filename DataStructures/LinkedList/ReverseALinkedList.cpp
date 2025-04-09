#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
void printList(Node* head){
    while (head != nullptr){
        cout << head->data << "->";
        head = head->next;
    }cout << "null" << endl;
}
void insertAtTail(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    // Empty List
    if (*head == nullptr){
        *head = newNode;
        return;
    }
    // Multiple Nodes
    Node* temp = *head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
void reverseList(Node** head){
    Node* prev = nullptr;
    Node* curr = *head;
    Node* forward = nullptr;
    while (curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    *head = prev;
}
int main() {
    Node* head = nullptr;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        insertAtTail(&head, arr[i]);
    }
    cout << "Original List:" << endl;
    printList(head);
    reverseList(&head);
    cout << "Reverse List:" << endl;
    printList(head);
    return 0;
}
