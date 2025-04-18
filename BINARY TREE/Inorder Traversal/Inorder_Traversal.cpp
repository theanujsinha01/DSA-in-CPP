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
void inorder( Node *root)
{
    if (root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
 
}

int main(){
    Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    inorder(root); 
    return 0;

}
// time complexity : O(N) where N is the number of nodes in the tree
// space complexity : O(N) for the recursion stack used in the algorithm