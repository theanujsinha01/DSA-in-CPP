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

// Inorder Traversal to store elements in an array
void StoreInOrder(Node* root, vector<int>& arr) {
    if (!root) return;
    StoreInOrder(root->left, arr);
    arr.push_back(root->data);
    StoreInOrder(root->right, arr);
}

// Function to search key in the stored inorder array
bool SearchInArray(Node* root, int key) {
    vector<int> vec;  // Create a vector to store inorder traversal
    StoreInOrder(root, vec);
    return binary_search(vec.begin(), vec.end(), key);
}

int main() {
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int key = 3;
    if (SearchInArray(root, key))
        cout << "Key Present in BST" << endl;
    else
        cout << "Key NOT Present in BST" << endl;

    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(N)