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

int Height(Node *root)
{
   
    if (root == NULL) return 0;   
    return max(Height(root->left),Height(root->right));

  
}
bool isBalanced(Node*root){
    if(root == NULL) return true;
    if(abs(Height(root->left)-Height(root->right))>1){
        return false;
    }

    if(isBalanced(root->left)&& isBalanced(root->right)){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    bool result = isBalanced(root);
    cout<<" Tree is Balanced ? : "<<result<<endl;
    
}
// Time Complexity : O(N) where N is the number of nodes in the tree
// Space Complexity : O(N) for the queue and map used in the algorithm

//................................................................................
// Start

// Function checkHeight(node):
//     If node is NULL:
//         Return 0

//     leftHeight = checkHeight(node.left)
//     If leftHeight == -1:
//         Return -1   // Left subtree not balanced

//     rightHeight = checkHeight(node.right)
//     If rightHeight == -1:
//         Return -1   // Right subtree not balanced

//     If abs(leftHeight - rightHeight) > 1:
//         Return -1   // Current node not balanced

//     Return 1 + max(leftHeight, rightHeight)

// Function isBalanced(root):
//     If checkHeight(root) == -1:
//         Return false
//     Else:
//         Return true

// In main:
//     Build tree with nodes and structure
//     result = isBalanced(root)
//     Print result (true or false)

// End
//................................................................................
