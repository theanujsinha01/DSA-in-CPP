#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* Insert(Node* root, int key) {
    if (root == NULL) return new Node(key);
    if (key < root->data)
        root->left = Insert(root->left, key);
    else
        root->right = Insert(root->right, key);
    return root;
}

Node* BST_From_Preorder(vector<int>& preorder) {
    Node* root = NULL;
    for (int i = 0; i < preorder.size(); i++)
        root = Insert(root, preorder[i]);
    return root;
}
void InOrderTraversal(Node* root) {
    if (!root) return;
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}
int main() {
    vector<int> preorder = {5, 2, 1, 3, 6};
    Node* root = BST_From_Preorder(preorder);
    InOrderTraversal(root);
    return 0;
}
// Time Complexity: O(N^2)
// Space Complexity: O(N)
