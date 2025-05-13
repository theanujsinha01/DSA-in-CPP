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
