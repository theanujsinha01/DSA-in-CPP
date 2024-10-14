// Problem :----
/* construct tree from inorder to post order

                   output 
                       3        inPUT :------
                     /    \      inorder : 9,3,15,20,7 
                    9      20     postorder : 9,15,7,20,3
                           /  \
                          15   7

  */

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

// Global variable to keep track of the current root index in the postorder traversal
int startP;

Node* construct(vector<int>& postorder, vector<int>& inorder, int start, int end)
{
    // Base case: If start exceeds end, there's no subtree to construct
    if (start > end) return NULL;
    Node *root = new Node(postorder[startP--]);

    // Find the index of the root node in the inorder traversal
    int k = 0;
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == root->data)
        {
            k = i;
            break;
        }
    }

    // Recursively construct the right and left subtrees
    root->right = construct(postorder, inorder, k + 1, end);
    root->left = construct(postorder, inorder, start, k - 1);

    return root;
}

// Function to build the tree from postorder and inorder arrays
Node* buildTree(vector<int>& postorder, vector<int>& inorder)
{
    int n = postorder.size();
    if (n <= 0) return NULL;
    startP = n - 1;
    return construct(postorder, inorder, 0, n - 1);
}
void inorderPrint(Node *root)
{
    if (root == NULL)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    vector<int> postorder = {9, 15, 7, 20, 3};
    vector<int> inorder = {9, 3, 15, 20, 7};
    Node *result = buildTree(postorder, inorder);
    inorderPrint(result);
    return 0;
}
