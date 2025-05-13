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

vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;      
    if(root == NULL) return ans;
          
      queue<Node*> q;
      q.push(root);
  
      while(q.size()>0)
      {
          Node* currNode = q.front();
          ans.push_back({currNode -> data});
          q.pop();
          
          if(currNode -> left)
          {
            q.push(currNode -> left);
          }
              
          if(currNode -> right)
          {
              q.push(currNode -> right);
          }
      }
      return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
 
    vector<vector<int>>result = levelOrder(root);
    for (auto row : result) { 
        for (auto element : row) { 
            cout << element << " ";
        }
        cout << endl; 
    }
}
// time complexity : O(N) where N is the number of nodes in the tree
// space complexity : O(N) for the queue used in the algorithm