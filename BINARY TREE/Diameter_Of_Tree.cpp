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
      if (root == NULL) return 0; // Base case
      return 1 + max(Height(root->left), Height(root->right));
}
  
int Diameter(Node *root)
{
      if (root == NULL) return 0;
  
      int leftHeight = Height(root->left);
      int rightHeight = Height(root->right);
  
      int leftDiameter = Diameter(root->left);
      int rightDiameter = Diameter(root->right);
  
      return max(leftHeight + rightHeight, max(leftDiameter, rightDiameter));
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
      return 0;
}
// Time Complexity : O(N^2) where N is the number of nodes in the tree
// Space Complexity : O(N) for the recursion stack used in the algorithm 

//................................................................................
// Start

// Function Height(root):
//     If root is NULL:
//         Return 0
//     leftHeight = Height(root.left)
//     rightHeight = Height(root.right)
//     Return 1 + max(leftHeight, rightHeight)

// Function Diameter(root):
//     If root is NULL:
//         Return 0

//     leftHeight = Height(root.left)
//     rightHeight = Height(root.right)

//     leftDiameter = Diameter(root.left)
//     rightDiameter = Diameter(root.right)

//     Return max(leftHeight + rightHeight, max(leftDiameter, rightDiameter))

// In main:
//     Build tree root with nodes 1,2,3,4,5
//     result = Diameter(root)
//     Print "Diameter of Tree: ", result

// End
//................................................................................
