#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : data(value), left(nullptr), right(nullptr){}
};
void inOrder(TreeNode* root){
    if (root != nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
TreeNode* insert(TreeNode* root, int key){
    if (root == nullptr){
        return new TreeNode(key);
    }
    if (key < root->data){
        root->left = insert(root->left, key);
    } else if (key > root->data){
        root->right = insert(root->right, key);
    }
    return root;
}
TreeNode* search(TreeNode* root, int key){
    // 1 root is null -> null (root)
    // 2 root data is the key -> return root
    if (root == nullptr || root->data == key){
        return root;
    }
    if (root->data > key){
        return search(root->left, key);
    }
    return search(root->right, key);
}
TreeNode* findMin(TreeNode* root){
    TreeNode* current = root;
    while (current && current->left != nullptr){
        current = current->left;
    }
    return current;
}
TreeNode* deleteNode(TreeNode* root, int key){
    if (root == nullptr){
        return root;
    }
    if (key < root->data){
        root->left = deleteNode(root->left, key);
    } else if (key > root->data){
        root->right = deleteNode(root->right, key);
    } else{
        // Only one child
        if(root->left == nullptr){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children
        // Find the in order successor which will be in the right subtree
        TreeNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,90);
    insert(root,80);
    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;
    int searchKey = 500;
    TreeNode* result = search(root,searchKey);
    if (result == nullptr){
        cout << "Key not found." << endl;
    } else{
        cout << "Key found." << endl;
    }
    cout << "Delete 50\n";
    root = deleteNode(root,50);
    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;
    return 0;
}
