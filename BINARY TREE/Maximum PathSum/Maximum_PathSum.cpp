// Problem :----
/* Given the root of a binary Tree
 return the Maximum Path SUM of Binary Tree


                       1        OUTPUT :------
                     /    \       {16}
                    2      3
                  /  \
                 4    10

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
int maxSum = INT_MIN;
int  pathSum(Node *root)
{
    if (root == NULL)return 0;
        
    int Left = max(pathSum(root->left),0);
    int Right = max(pathSum(root->right),0);
    int newPath = root->data+Left+Right;

    maxSum = max(maxSum,newPath);
    return root->data + max(Left,Right);
}

int maxPathSum(Node *root)
{
    pathSum(root);
    return maxSum;  
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(10);

    int result = maxPathSum(root);
    cout << "Maximum Path Sum : " << result << endl;
}