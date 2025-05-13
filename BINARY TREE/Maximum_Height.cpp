
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
    return 1+max(Height(root->left),Height(root->right));  
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int result = Height(root);
    cout<<"Maximum Height of Tree : -- "<<result<<endl;
    
}
//time complexity : O(N) where N is the number of nodes in the tree
// space complexity : O(N) for the recursion stack used in the algorithm