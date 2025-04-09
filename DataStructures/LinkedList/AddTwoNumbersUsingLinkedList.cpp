#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};
void insertAtTail(Node** head, int newValue){
    Node* newNode = new Node(newValue);
    if (*head == nullptr){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
void printList(Node* head){
    while (head != nullptr){
        cout << head->data << "->";
        head = head->next;
    }cout << "null" << endl;
}
Node* addTwoNumbers(Node* l1, Node* l2){
    Node* dummy = new Node(0);
    Node* curr = dummy;
    int carry = 0;
    while (l1 != nullptr && l2 != nullptr || carry != 0){
        int sum = carry;
        if (l1 != nullptr){
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != nullptr){
            sum += l2->data;
            l2 = l2->next;
        }
        carry = sum / 10;
        curr->next = new Node(sum % 10);
        curr = curr->next;
    }
    return dummy->next;
}
int main() {
    Node* l1 = nullptr;
    Node* l2 = nullptr;
    int arr1[] = {2,4,3}; // It is 342
    int arr2[] = {5,6,4}; // It is 465
    for (int i = 0; i < 3; ++i) {
        insertAtTail(&l1, arr1[i]);
        insertAtTail(&l2, arr2[i]);
    }
    cout << "First Number: ";
    printList(l1);
    cout << "Second Number: ";
    printList(l2);
    Node* result = addTwoNumbers(l1,l2);
    cout << "Resultant List: ";
    printList(result);
    return 0;
}
