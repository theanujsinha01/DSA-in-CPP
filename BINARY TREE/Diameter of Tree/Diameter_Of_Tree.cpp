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
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int Height(Node *root, int &diameter)
{
    if (root == NULL) return 0; // Base case
        
    int leftHeight = Height(root->left, diameter);
    int rightHeight = Height(root->right, diameter);
    
    // Corrected formula: Diameter in terms of edges
    diameter = max(diameter, leftHeight + rightHeight);
    
    return 1 + max(leftHeight, rightHeight);
}

int Diameter(Node *root)
{
    int diameter = 0;
    Height(root, diameter);
    return diameter;
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