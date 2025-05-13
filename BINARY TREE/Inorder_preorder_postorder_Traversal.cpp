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
        left = right = NULL;
    }
};
// Store preorder in vector
void preorder(Node *root, vector<int> &res) {
    if (root != NULL) {
        res.push_back(root->data);
        preorder(root->left, res);
        preorder(root->right, res);
    }
}

// Store inorder in vector
void inorder(Node *root, vector<int> &res) {
    if (root != NULL) {
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
}

// Store postorder in vector
void postorder(Node *root, vector<int> &res) {
    if (root != NULL) {
        postorder(root->left, res);
        postorder(root->right, res);
        res.push_back(root->data);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    vector<int> in, pre, post;

    inorder(root, in);
    preorder(root, pre);
    postorder(root, post);

    // Print results
    cout << "Inorder: ";
    for (int val : in) cout << val << " ";
    cout << "\nPreorder: ";
    for (int val : pre) cout << val << " ";
    cout << "\nPostorder: ";
    for (int val : post) cout << val << " ";
    cout << endl;
    return 0;
}
