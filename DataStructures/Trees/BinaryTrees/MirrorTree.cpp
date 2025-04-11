#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr){}
};
void inOrder(Node* root){ // LDR
    if (root != nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
Node* mirrorTree(Node* root){
    if (root == nullptr){
        return root;
    }
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    // Use recursion for swapping the subtrees
    if (root->left){
        mirrorTree(root->left);
    }
    if (root->right){
        mirrorTree(root->right);
    }
    return root;
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

    cout << "In Order Traversal of Original Tree: ";
    inOrder(root);
    cout << endl;
    root = mirrorTree(root);
    cout << "In Order Traversal of Mirror Tree: ";
    inOrder(root);
    return 0;
}
