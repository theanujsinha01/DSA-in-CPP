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
//................................................................................

// Start

// Function InsertKey(root, key):
//     If root is NULL:
//         Create new node with key and return it

//     If root.data == key:
//         Return root  // key already exists, no insert

//     If root.data < key:
//         root.right = InsertKey(root.right, key)
//     Else:
//         root.left = InsertKey(root.left, key)

//     Return root

// Function InOrderTraversal(root):
//     If root is NULL:
//         Return
//     InOrderTraversal(root.left)
//     Print root.data
//     InOrderTraversal(root.right)

// In main:
//     Create BST with nodes 5, 2, 6, 1, 3
//     Call InsertKey(root, 7) to insert 7
//     Call InOrderTraversal(root) to print BST in order

// End
//................................................................................