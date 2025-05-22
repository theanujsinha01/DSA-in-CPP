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

Node* BST_From_Postorder(vector<int>& postorder) {
    Node* root = NULL;
    for (int i = postorder.size() - 1; i >= 0; i--)
        root = Insert(root, postorder[i]);
    return root;
}

void InOrderTraversal(Node* root) {
    if (!root) return;
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}
int main() {
    vector<int> postorder = {5, 2, 1, 3, 6};
    Node* root = BST_From_Postorder(postorder);
    InOrderTraversal(root);
    return 0;
}

// Time Complexity: O(N^2)
// Space Complexity: O(1)

// Start

// Input: postorder array

// Function Insert(root, key):
//     If root is NULL:
//         Create new node with key and return it
//     If key < root.data:
//         root.left = Insert(root.left, key)
//     Else:
//         root.right = Insert(root.right, key)
//     Return root

// Function BST_From_Postorder(postorder):
//     root = NULL
//     For i from last index to 0:
//         root = Insert(root, postorder[i])
//     Return root

// Function InOrderTraversal(root):
//     If root is NULL:
//         Return
//     InOrderTraversal(root.left)
//     Print root.data
//     InOrderTraversal(root.right)

// In main:
//     Input postorder array
//     root = BST_From_Postorder(postorder)
//     Call InOrderTraversal(root)

// End
