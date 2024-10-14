// Problem :----
/* Given the root of a binary Tree
 return the Diameter of Binary Tree


                       1        OUTPUT :------
                     /    \       {4}
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

int Height(Node *root, int &diameter)
{
    if (root == NULL)
        return 0;

    int lh = Height(root->left, diameter);
    int rh = Height(root->right, diameter);

    // Update the diameter with the maximum of the current and the sum of left and right heights
    diameter = max(diameter, lh + rh);

    // Return the height of the current node
    return 1 + max(lh, rh);
}

int Diameter(Node *root)
{
    int diameter = 0;
    Height(root, diameter);
    return diameter+1;  // Returns the number of edges in the diameter
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int result = Diameter(root);
    cout << "Diameter of Tree: " << result << endl;
}