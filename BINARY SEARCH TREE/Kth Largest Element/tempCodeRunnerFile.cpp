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
void Inorder(Node *root, int &kth, int &ans) {
    if (root == NULL) return;

    Inorder(root->right, kth, ans);
    kth--;
    if (kth == 0) {
        ans = root->data; 
        return;
    }
    Inorder(root->left, kth, ans);
}
int kthLargest(Node *root, int k) {
    int ans = -1;  // To store the answer
    Inorder(root, k, ans); 
    return ans;
}


int main() {
    // Create the tree
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int k = 2; // Example: Find the 3rd smallest element
    int result = kthLargest(root, k);
    cout << "The " << k << "th Largest element is: " << result << endl;

    return 0;
}