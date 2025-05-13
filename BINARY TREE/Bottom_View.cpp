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
  
vector<int> bottomView(Node *root) {
      vector<int> ans;
      if (root == NULL) return ans;
  
      map<int, int> mp;
      queue<pair<Node *, int>> q;
      q.push({root, 0});
  
      while (!q.empty()) {
          auto pr = q.front();
          q.pop();
          Node *temp = pr.first;
          int hd = pr.second;
  
          mp[hd] = temp->data; // Store bottom-most node for each horizontal distance
  
          if (temp->left != NULL) {
              q.push({temp->left, hd - 1});  // Push left first
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
  
      vector<int> result = bottomView(root);
  
      for (const auto &ele : result) {
          cout << ele << " ";
      }
      return 0;
}
    // Time Complexity : O(N) where N is the number of nodes in the tree
    // Space Complexity : O(N) for the queue and map used in the algorithm
  