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


int i = 0; // Index in preorder

Node* build(vector<int>& pre, vector<int>& in, int start, int end) {
    if (start > end) return NULL;

    int val = pre[i++];
    Node* root = new Node(val);

    int mid;
    for (mid = start; mid <= end; mid++) {
        if (in[mid] == val) break;
    }

    root->left = build(pre, in, start, mid - 1);
    root->right = build(pre, in, mid + 1, end);

    return root;
}

void printInorder(Node* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    vector<int> preorder = {1, 2, 4, 5, 3};
    vector<int> inorder = {4, 2, 5, 1, 3};

    Node* root = build(preorder, inorder, 0, inorder.size() - 1);
    printInorder(root);  // Output: 4 2 5 1 3

    return 0;
}

