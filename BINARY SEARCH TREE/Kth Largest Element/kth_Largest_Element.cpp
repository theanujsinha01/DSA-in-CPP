// Problem :----
/* Given the root of a binary Search Tree
   return kth Largest Element in BST

                        5       OUTPUT :------
                     /    \       kth = 2nd Largest
                    2      6      { 5 }
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
  
  int kthLargest(Node *root, int k) {
      vector<int> v;
      Inorder(root, v);
      if (k > v.size()) return -1;  // Handle invalid k
      return v[v.size()-k];  // Fix the indexing issue
  }
  
  int main() {
      // Create the tree
      Node *root = new Node(5);
      root->left = new Node(2);
      root->right = new Node(6);
      root->left->left = new Node(1);
      root->left->right = new Node(3);
  
      int k = 2; // Example: Find the 2nd largest element
      int result = kthLargest(root, k);
      
      cout << "The " << k << "th largest element is: " << result << endl;
  
      return 0;
  }
  