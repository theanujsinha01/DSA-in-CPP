// Problem :----
/* Given the root of a binary Search Tree
   return  BST from preorder traversal

                        5       OUTPUT :------
                     /    \       preorder = 
                    2      6      { 5,2,1,3,6 }
                  /  \      
                 1    3      



  */

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
Node* Insert(Node* root, int key) {
    if (root == NULL) {
        return new Node(key);
       
    }
    if (root->data < key) {
        root->right = Insert(root->right, key);
    } else {
        root->left = Insert(root->left, key);
    }
    return root;
}

Node* BST_From_Preorder(vector<int>& preorder) {
    Node* root = NULL;  // Initialize root to NULL
    for (int i = 0; i < preorder.size(); i++) {
       root = Insert(root, preorder[i]);  // Insert the actual value, not the index
    }
    return root;
}

void InOrderTraversal(Node *root) {
    if (root == NULL) return;
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}

int main() {
    vector<int>preorder = {5,2,1,3,6};
    Node* result = BST_From_Preorder(preorder);
    InOrderTraversal(result);
    return 0;
}