#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int height(Node* root, bool &valid) {
    if (root == NULL) return 0;
    
    int l = height(root->left, valid);
    int r = height(root->right, valid);
    
    if (abs(l - r) > 1) {
        valid = false;
    }
    
    return 1 + max(l, r);
}

bool isBalanced(Node* root) {
    bool valid = true;
    height(root, valid);
    return valid;
}

// Helper function to create a sample binary tree
Node* createSampleTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->left = new Node(7); // Unbalanced node
    return root;
}

int main() {
    Node* root = createSampleTree();
    
    if (isBalanced(root)) {
        cout << "The tree is balanced" << endl;
    } else {
        cout << "The tree is not balanced" << endl;
    }
    
    return 0;
}
