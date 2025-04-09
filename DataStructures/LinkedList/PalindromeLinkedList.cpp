#include <iostream>
#include <stack>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};
bool isPalindrome(Node* head){
    stack<int> s;
    Node* temp = head;
    while (temp){
        s.push(temp->data);
        temp = temp->next;
    }
    while (head){
        if (head->data != s.top()) return false;
        s.pop();
        head = head->next;
    }
    return true;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    cout << (isPalindrome(head) ? "Palindrome" : "Not A Palindrome.") << endl;
    return 0;
}
