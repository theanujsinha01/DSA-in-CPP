// Problem :----
/* Given the root of a binary Tree
 return an array containing the level order traversal
 of the tree

                 ......1....      OUTPUT :------
                     /    \       { [1], [2,3], [4,5]}
                 ...2......3
                  /  \
              ...4....5....



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

vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>>ans;
    if(root == NULL)return ans;
    queue<Node*>q; 
    q.push(root);// push root to queue
    while(q.size()>0){
       int size = q.size();
       vector<int>level;
       for(int i=0; i<size; i++){
        Node*temp = q.front();
        q.pop();
        level.push_back(temp->data);
        if(temp->left != NULL){
            q.push(temp->left);
        }
         if(temp->left != NULL){
            q.push(temp->right);
        }

       }
       ans.push_back(level);
    }
    return ans;

}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    vector<vector<int>>result = levelOrder(root);
    
    for (const auto& row : result) { 
        for (const auto& element : row) { 
            cout << element << " ";
        }
        cout << endl; 
    }
}