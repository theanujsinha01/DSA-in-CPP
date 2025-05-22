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

//................................................................................
// Start

// Function bottomView(root):
//     ans = empty list
//     If root is NULL:
//         Return ans

//     Create map mp to store (horizontal distance -> node value)
//     Create queue q of pairs (Node, horizontal distance)
//     Push (root, 0) to q

//     While q is not empty:
//         pr = q.front()
//         q.pop()
//         temp = pr.first (node)
//         hd = pr.second (horizontal distance)

//         mp[hd] = temp.data   // update bottom node for hd

//         If temp.left exists:
//             Push (temp.left, hd - 1) to q
//         If temp.right exists:
//             Push (temp.right, hd + 1) to q

//     For each key-value pair in mp in sorted order of keys:
//         Append value to ans

//     Return ans

// In main:
//     Build tree with root 1, left child 2, right child 3
//     Add left and right children to node 2 as 4 and 5
//     result = bottomView(root)
//     Print all elements in result

// End
//................................................................................

  