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
