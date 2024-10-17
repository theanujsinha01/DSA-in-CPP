// Problem :----
/* Given the root of a binary Search Tree
   return  BST from sorted arr

                        0       OUTPUT :------
                     /    \       arr = 
                  -10      5     { -10,-3,0,5,9 }
                     \      \
                     -3      9



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
Node* BST(vector<int>& arr, int left, int right) {
    if (left >= right) return NULL; 
    int mid = (left + right) / 2; 
    Node* root = new Node(arr[mid]); 

    root->left = BST(arr, left, mid); 
    root->right = BST(arr, mid + 1, right);
    return root;
}

Node* SortedArrToBST(vector<int>& arr) {
    int left = 0;
    int right = arr.size();
    return BST(arr, left, right);
}

void InOrderTraversal(Node *root) {
    if (root == NULL) return;
    InOrderTraversal(root->left);
    cout << root->data << " "; 
    InOrderTraversal(root->right); 
}

int main() {
    vector<int> arr = {-10, -3, 0, 5, 9}; 
    Node* result = SortedArrToBST(arr); 
    InOrderTraversal(result); 
    cout << endl; 
    return 0;
}