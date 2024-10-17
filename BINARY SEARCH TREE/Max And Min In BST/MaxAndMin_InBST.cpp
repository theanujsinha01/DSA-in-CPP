// Problem :----
/* Given the root of a binary Search Tree
 return max and min value of  BST

                        5       OUTPUT :------
                     /    \       max = 6, min = 1
                    2      6 
                  /  \
                 1    3



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
int MinElementInBST(Node *root) {
    if (root == NULL) {
        return -1; // Return -1 or a sentinel value to indicate the tree is empty
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int MaxElementInBST(Node *root) {
    if (root == NULL) {
        return -1; // Return -1 or a sentinel value to indicate the tree is empty
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

int main() {
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int MaxElemnt = MaxElementInBST(root);
    int MinElemnt = MinElementInBST(root);

    cout << "Max Element : " << MaxElemnt << endl;
    cout << "Min Element : " << MinElemnt << endl;
    return 0;
}