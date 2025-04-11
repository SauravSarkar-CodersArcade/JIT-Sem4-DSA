#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr){}
};
bool areIdentical(Node* tree1, Node* tree2){
    // Empty
    if (tree1 == nullptr && tree2 == nullptr){
        return true;
    }
    // One is null
    if (tree1 == nullptr || tree2 == nullptr){
        return false;
    }
    // Compare the root node data
    if (tree1->data != tree2->data){
        return false;
    }
    // Recursively check the left & right subtrees
    return (areIdentical(tree1->left,tree2->left)
    && areIdentical(tree1->right, tree2->right));
}
int main() {
    // Top to Bottom & Left To Right (Level By Level)
    Node* tree1 = new Node(1);
    tree1->left = new Node(2);
    tree1->right = new Node(3);
    Node* tree2 = new Node(1);
    tree2->left = new Node(2);
    tree2->right = new Node(3);
    Node* tree3 = new Node(1);
    tree3->left = new Node(2);
    tree3->right = new Node(3);
    Node* tree4 = new Node(4);
    tree4->left = new Node(5);
    tree4->right = new Node(6);

    if (areIdentical(tree1,tree2)){
        cout << "T1 & T2 are identical." << endl;
    }else{
        cout << "T1 & T2 are not identical." << endl;
    }
    if (areIdentical(tree3,tree4)){
        cout << "T3 & T4 are identical." << endl;
    }else{
        cout << "T3 & T4 are not identical." << endl;
    }
    return 0;
}
