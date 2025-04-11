#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr){}
};
void levelOrderTraversal(Node* root){
    if (root == nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
        Node* node = q.front();
        q.pop();
        cout << node->data << " ";
        // Left Subtree
        if (node->left != nullptr){
            q.push(node->left);
        }
        // Right Subtree
        if (node->right != nullptr){
            q.push(node->right);
        }
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
    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    return 0;
}
