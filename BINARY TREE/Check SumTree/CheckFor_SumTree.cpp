// Problem :----
/* Given the root of a binary Tree
 return the Diameter of Binary Tree


                       10        OUTPUT :------
                     /    \       {4}
                    5      5
                  /  \
                 2    3



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

int  SumTree(Node *root, bool &flage)
{
    if (root == NULL)return 0;
        
    if((root->left ==NULL) && (root->right ==NULL))
    return root->data;

    int LeftSum = SumTree(root->left,flage);
    int RightSum = SumTree(root->right,flage);

    if(root->data != (LeftSum+RightSum))
    flage = false;


    return root->data+LeftSum+RightSum;
}

bool SumTreeCheck(Node *root)
{
    bool flage = true;
    SumTree(root, flage);
    return flage;  
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(2);

    bool result = SumTreeCheck(root);
    cout << "Check SumTree is ?" << result << endl;
}