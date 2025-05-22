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

//................................................................................
// Start

// Function topView(root):
//     ans = empty list
//     If root is NULL:
//         Return ans

//     mp = empty map  // horizontal distance -> first node data
//     q = empty queue of pairs (Node, horizontal distance)
//     q.push(root, 0)

//     While q is not empty:
//         pr = q.front()
//         q.pop()
//         temp = pr.first
//         hd = pr.second

//         If hd not in mp:
//             mp[hd] = temp.data

//         If temp.left is not NULL:
//             q.push(temp.left, hd - 1)

//         If temp.right is not NULL:
//             q.push(temp.right, hd + 1)

//     For each (hd, data) in mp in ascending order of hd:
//         ans.push_back(data)

//     Return ans

// In main:
//     Build tree with root 1, left child 2, right child 3
//     Add left and right children to node 2 as 4 and 5
//     result = topView(root)
//     Print all elements of result separated by space

// End
//................................................................................
