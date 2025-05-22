#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int i;  // index in postorder

Node* build(vector<int>& post, vector<int>& in, int start, int end) {
    if (start > end) return NULL;

    int val = post[i--];
    Node* root = new Node(val);

    int mid;
    for (mid = start; mid <= end; mid++) {
        if (in[mid] == val) break;
    }

    root->right = build(post, in, mid + 1, end);
    root->left = build(post, in, start, mid - 1);

    return root;
}

void printInorder(Node* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    vector<int> postorder = {9, 15, 7, 20, 3};
    vector<int> inorder = {9, 3, 15, 20, 7};

    i = postorder.size() - 1;
    Node* root = build(postorder, inorder, 0, inorder.size() - 1);
    
    printInorder(root);  // Output should match inorder

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N) for the recursion stack

//................................................................................
// Start

// Global variable i = last index of postorder vector

// Function build(post, in, start, end):
//     If start > end:
//         Return NULL

//     val = post[i]
//     Decrement i
//     Create root node with val

//     Find mid where in[mid] == val

//     root.right = build(post, in, mid + 1, end)
//     root.left = build(post, in, start, mid - 1)

//     Return root

// Function printInorder(root):
//     If root is NULL:
//         Return
//     printInorder(root.left)
//     Print root.data
//     printInorder(root.right)

// In main:
//     Initialize postorder and inorder vectors
//     Set i to last index of postorder
//     root = build(postorder, inorder, 0, size-1)
//     printInorder(root)

// End
//................................................................................
