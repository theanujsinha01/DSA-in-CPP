#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
    
};
Node* InsertKey(Node *root, int key) {
    if (root == NULL) {
        return new Node(key);
    }

    if (root->data == key) {
        return root;
    }

    if (root->data <key) {
        root->right = InsertKey(root->right, key);
    } else {
        root->left = InsertKey(root->left, key);
    }
    return root;
}
void InOrderTraversal(Node *root) {
    if (root == NULL) return;
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}
int main() {
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    Node*result = InsertKey(root,7);
    InOrderTraversal(result);
    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(N)