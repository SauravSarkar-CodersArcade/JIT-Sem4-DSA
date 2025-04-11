#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : data(value), left(nullptr), right(nullptr){}
};
TreeNode* sortedArrayToBalancedBST(int arr[], int s, int e){
    // Start exceeds End ??
    if (s > e){
        return nullptr;
    }
    int mid = s + (e-s)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    // Recursive call for the left subtree
    root->left = sortedArrayToBalancedBST(arr,s,mid-1);
    // Recursive call for the right subtree
    root->right = sortedArrayToBalancedBST(arr,mid+1,e);
    return root;
}
void inOrder(TreeNode* root){
    if (root != nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    TreeNode* root = sortedArrayToBalancedBST(arr,0,size-1);
    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;
    return 0;
}
