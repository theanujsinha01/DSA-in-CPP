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

// Inorder → ascending
void inorderAsc(Node *root, vector<int> &v) {
    if (root != NULL) {
        inorderAsc(root->left, v);
        v.push_back(root->data);
        inorderAsc(root->right, v);
    }
}

// Reverse inorder → descending
void inorderDesc(Node *root, vector<int> &v) {
    if (root != NULL) {
        inorderDesc(root->right, v);
        v.push_back(root->data);
        inorderDesc(root->left, v);
    }
}

int kthLargest(Node *root, int k) {
    vector<int> v;
    inorderDesc(root, v);  // Use reverse inorder
    if (k > v.size()) return -1;
    return v[k - 1];
}

int kthSmallest(Node *root, int k) {
    vector<int> v;
    inorderAsc(root, v);  // Use normal inorder
    if (k > v.size()) return -1;
    return v[k - 1];
}

int main() {
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int k = 2;
    cout << "The " << k << "th largest element is: " << kthLargest(root, k) << endl;
    cout << "The " << k << "th smallest element is: " << kthSmallest(root, k) << endl;

    return 0;
}
// time complexity: O(n), where n is the number of nodes in the BST.
// space complexity: O(n), for storing the elements in the vector v.

//................................................................................
// Start

// Function inorderAsc(root, v):
//     If root is NULL:
//         Return
//     inorderAsc(root.left, v)
//     Add root.data to v
//     inorderAsc(root.right, v)

// Function inorderDesc(root, v):
//     If root is NULL:
//         Return
//     inorderDesc(root.right, v)
//     Add root.data to v
//     inorderDesc(root.left, v)

// Function kthLargest(root, k):
//     Create empty vector v
//     Call inorderDesc(root, v)
//     If k > size of v:
//         Return -1
//     Return v[k-1]

// Function kthSmallest(root, k):
//     Create empty vector v
//     Call inorderAsc(root, v)
//     If k > size of v:
//         Return -1
//     Return v[k-1]

// In main:
//     Create BST with nodes 5, 2, 6, 1, 3
//     Set k = 2
//     Print kthLargest(root, k)
//     Print kthSmallest(root, k)

// End
//................................................................................

