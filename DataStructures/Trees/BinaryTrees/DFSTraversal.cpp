#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr){}
};
void preOrder(Node* root){ // DLR
    if (root != nullptr){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(Node* root){ // LDR
    if (root != nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
void postOrder(Node* root){ // LRD
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}
int main() {
    // Top to Bottom & Left To Right (Level By Level)
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(9);
    root->right->right->left = new Node(15);
    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << endl;
    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;
    cout << "PostOrder Traversal: ";
    postOrder(root);
    return 0;
}
