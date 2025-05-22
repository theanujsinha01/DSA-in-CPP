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

bool isSameTree(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL ) return true;
    if (root1 == NULL || root2 == NULL ) return false;
    if (root1->data != root2->data ) return false;
        

   if (isSameTree(root1->left,root2->left) && isSameTree(root1->right,root2->right))
      return true;

      return false;
}


int main()
{
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);


    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

   bool result = isSameTree(root1,root2); 
   cout<<"Tree is Identical ? : "<<result<<endl;
}
//     // Time Complexity : O(N) where N is the number of nodes in the tree
//     // Space Complexity : O(N) for the queue and map used in the algorithm

//................................................................................
// Start

// Function isSameTree(root1, root2):
//     If root1 is NULL and root2 is NULL:
//         Return true
//     If root1 is NULL or root2 is NULL:
//         Return false
//     If root1.data != root2.data:
//         Return false

//     leftCheck = isSameTree(root1.left, root2.left)
//     rightCheck = isSameTree(root1.right, root2.right)

//     If leftCheck AND rightCheck are true:
//         Return true
//     Else:
//         Return false

// In main:
//     Build tree root1 with nodes 1,2,3,4,5
//     Build tree root2 with nodes 1,2,3,4,5
//     result = isSameTree(root1, root2)
//     Print result (true or false)

// End
//................................................................................
