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
int MinElementInBST(Node *root) {
    if (root == NULL) {
        return -1; // Return -1 or a sentinel value to indicate the tree is empty
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int MaxElementInBST(Node *root) {
    if (root == NULL) {
        return -1; // Return -1 or a sentinel value to indicate the tree is empty
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

int main() {
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int MaxElemnt = MaxElementInBST(root);
    int MinElemnt = MinElementInBST(root);

    cout << "Max Element : " << MaxElemnt << endl;
    cout << "Min Element : " << MinElemnt << endl;
    return 0;
}

// time complexity: O(h) where h is the height of the tree
// space complexity: O(1) as we are not using any extra space

//................................................................................
// Start

// Function MinElementInBST(root):
//     If root is NULL:
//         Return -1  // tree is empty
//     While root.left is not NULL:
//         root = root.left
//     Return root.data

// Function MaxElementInBST(root):
//     If root is NULL:
//         Return -1  // tree is empty
//     While root.right is not NULL:
//         root = root.right
//     Return root.data

// In main:
//     Create BST with nodes
//     Call MaxElementInBST(root)
//     Call MinElementInBST(root)
//     Print Max Element
//     Print Min Element

// End
//................................................................................
