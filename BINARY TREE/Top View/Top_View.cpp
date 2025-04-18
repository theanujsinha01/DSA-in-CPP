// Problem :----
/* Given the root of a binary Tree
 return an array containing the top view  traversal
 of the tree

                       1        OUTPUT :------
                     /    \       { 4,2,1,3}
                    2      3
                  /  \
                 4    5



  */

  #include <bits/stdc++.h>
  using namespace std;
  
  struct Node {
      int data;
      Node *left, *right;
      Node(int val) {
          data = val;
          left = NULL;
          right = NULL;
      }
  };
  
  vector<int> topView(Node *root) {
      vector<int> ans;
      if (root == NULL) return ans;
  
      map<int, int> mp; // Stores the first node at each horizontal distance
      queue<pair<Node *, int>> q;
      q.push({root, 0});
  
      while (!q.empty()) {
          auto pr = q.front();
          q.pop();
          Node *temp = pr.first;
          int hd = pr.second;
  
          // Insert into map only if this horizontal distance is not already present
          if (mp.count(hd)==0) {
              mp[hd] = temp->data;
          }
  
          if (temp->left != NULL) {
              q.push({temp->left, hd - 1}); // Push left first
          }
          if (temp->right != NULL) {
              q.push({temp->right, hd + 1}); // Push right after left
          }
      }
  
      // Transfer values from map to ans vector
      for (auto it : mp) {
          ans.push_back(it.second);
      }
      return ans;
  }
  
  int main() {
      Node *root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);
      root->left->left = new Node(4);
      root->left->right = new Node(5);
  
      vector<int> result = topView(root);
  
      for (const auto &ele : result) {
          cout << ele << " ";
      }
      return 0;
  }
    // Time Complexity : O(N) where N is the number of nodes in the tree
    // Space Complexity : O(N) for the queue and map used in the algorithm
  