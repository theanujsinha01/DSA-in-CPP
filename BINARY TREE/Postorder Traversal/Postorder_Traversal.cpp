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
        left = right = NULL;
    }
};
void postorder(struct Node *root)
{
    if (root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    postorder(root);
}
// // time complexity : O(N) where N is the number of nodes in the tree
// // space complexity : O(N) for the recursion stack used in the algorithm