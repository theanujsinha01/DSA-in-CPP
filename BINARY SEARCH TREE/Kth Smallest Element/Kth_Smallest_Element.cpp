// Problem :----
/* Given the root of a binary Search Tree
   return kth smallest Element in BST

                        5       OUTPUT :------
                     /    \       kth = 3rd Smallest
                    2      6      { 3 }
                  /  \      
                 1    3      



  */

  #include <bits/stdc++.h>
  using namespace std;
  
  struct Node {
      int data;
      Node *left;
      Node *right;
      Node(int val) {
          data = val;
          left = NULL;
          right = NULL;
      }
  };
  
  void Inorder(Node *root, vector<int> &v) {
      if (root != NULL){
        Inorder(root->left, v);  // Reverse Inorder for descending order
        v.push_back(root->data);
        Inorder(root->right, v);
      }  
  }
  
  int kthsmallest(Node *root, int k) {
      vector<int> v;
      Inorder(root, v);
      if (k > v.size()) return -1; 
      return v[k-1];  
  }
  
  int main() {
      // Create the tree
      Node *root = new Node(5);
      root->left = new Node(2);
      root->right = new Node(6);
      root->left->left = new Node(1);
      root->left->right = new Node(3);
  
      int k = 2; // Example: Find the 2nd smallest element
      int result = kthsmallest(root, k);
      
      cout << "The " << k << "th smallest element is: " << result << endl;
  
      return 0;
  }
  