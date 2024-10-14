// Problem :----
/* Given the root of a binary Tree
 return Check if Binary Tree is Balance


                       1        OUTPUT :------
                     /    \       True
                    2      3
                  /  \
                 4    5



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

int Height(Node *root)
{
   
    if (root == NULL)
        return 0;
    return max(Height(root->left),Height(root->right));

  
}
bool isBalanced(Node*root){
    if(root == NULL) return true;
    if(abs(Height(root->left)-Height(root->right))>1)
    return false;

    if(isBalanced(root->left)&& isBalanced(root->right))
    return true;


    return false;
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