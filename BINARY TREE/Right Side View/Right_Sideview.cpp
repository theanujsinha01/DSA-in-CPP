// Problem :----
/* Given the root of a binary Tree
 return an array containing the right side  view  traversal
 of the tree

                       .1 <--       OUTPUT :------
                     /    \       { 1, 3, 5}
                   .2......3 <--
                  /  \
              ...4....5 <--



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
void recursion(Node *root, int level, vector<int> &ans)
{
    if (root == NULL)
        return;
    if (ans.size() < level)
    {
        ans.push_back(root->data);
    }
    recursion(root->right, level + 1, ans);
    recursion(root->left, level + 1, ans);
}
vector<int> rightSideView(Node *root)
{
    vector<int> ans;
    recursion(root, 1, ans);
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int>result = rightSideView(root);

    for (const auto& ele : result)
    {
       cout<<ele<<" ";
        
    }
    
}