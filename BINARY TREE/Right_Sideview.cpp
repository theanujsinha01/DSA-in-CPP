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
        left = right =  NULL;
    }
};
void recursion(Node *root, int level, vector<int> &ans)
{
    if (root == NULL) return;
    
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

    for (auto ele : result)
    {
       cout<<ele<<" ";
        
    }
    
}
// time complexity : O(N) where N is the number of nodes in the tree
// space complexity : O(N) for the recursion stack used in the algorithm

//................................................................................
// Start

// Function recursion(node, level, ans):
//     If node is NULL:
//         Return

//     If size of ans < level:
//         Add node.data to ans

//     recursion(node.right, level + 1, ans)
//     recursion(node.left, level + 1, ans)

// Function rightSideView(root):
//     ans = empty list
//     recursion(root, 1, ans)
//     Return ans

// In main:
//     Build tree with root 1, left child 2, right child 3
//     Add left and right children to node 2 as 4 and 5
//     result = rightSideView(root)
//     Print all elements of result separated by space

// End
//................................................................................
