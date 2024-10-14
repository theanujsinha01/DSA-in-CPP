// Problem :----
/* construct tree from inorder to post order

                   output 
                       10        inPUT :------
                     /    \      inorder : 40,20,50,10,60,30 
                    20     30
                  /    \    /     preorder : 10,20,40,50,30,60
                40     50  60 
                          

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
int startP = 0;

Node* construct(vector<int>& preorder, vector<int>& inorder, int start, int end)
{
    // Base case: If start exceeds end, there's no subtree to construct
    if (start > end) return NULL;
    Node *root = new Node(preorder[startP++]);

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
    
    root->left = construct(preorder, inorder, start, k - 1);
    root->right = construct(preorder, inorder, k + 1, end);

    return root;
}

// Function to build the tree from postorder and inorder arrays
Node* buildTree(vector<int>& preorder, vector<int>& inorder)
{
    int n = preorder.size();
    if (n <= 0) return NULL;
    startP = 0;
    return construct(preorder, inorder, 0, n - 1);
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
    vector<int> preorder = {10, 20, 40, 50, 30,60};
    vector<int> inorder = {40, 20, 50, 10, 60,30};
    Node *result = buildTree(preorder, inorder);
    inorderPrint(result);
    return 0;
}
