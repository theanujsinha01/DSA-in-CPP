// Problem :----
/* Given the root of a binary Search Tree
 return valu is present  or not in BST

                        5       OUTPUT :------
                     /    \       input = 3 , return true
                    2      6 
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
bool SearchInBST(Node *root, int key)
{
    if (root == NULL)
        return false;
    if(root->data == key)
       return true;
    if(root->data < key){
        return SearchInBST(root->right,key);
    }

    return SearchInBST(root->left,key);
    
}


int main()
{
   Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    bool result = SearchInBST(root,3);

    if(result){
        cout<<" Key Present in BST"<<endl;
    }
    else{
       cout<<" Key NOT Present in BST"<<endl; 
    }


    
}