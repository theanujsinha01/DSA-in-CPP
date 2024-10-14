// Problem :----
/* Given the root of a binary Tree
 return an array containing the zig zag  traversal
 of the tree

                  -->  1        OUTPUT :------
                     /    \       { 1, 3, 2, 4, 5}
                    2      3 <--
                  /  \
              -->4    5 



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


vector<vector<int>>zigzagLevelOrder(Node *root)
{
   vector<vector<int>>ans;
   if(root == NULL)return ans;
   stack<Node*>s1;
   stack<Node*>s2;
   s1.push(root);
   while(s1.size()>0 || s2.size()>0){
         vector<int>level;// left to right
         while(s1.size()>0){
           Node*temp = s1.top();
           s1.pop();
           level.push_back(temp->data);
           if(temp->left != NULL){
            s2.push(temp->left);
           }
            if(temp->right != NULL){
            s2.push(temp->right);
           }
         }
         if(level.size()>0){
            ans.push_back(level);
         }
         level.clear();


         // right to left

         while(s2.size()>0){
           Node*temp = s2.top();
           s2.pop();
           level.push_back(temp->data);
           if(temp->right != NULL){
            s2.push(temp->right);
           }
           if(temp->left != NULL){
            s2.push(temp->left);
           }
           
         }
         if(level.size()>0){
            ans.push_back(level);
         }
         level.clear();
         return ans;
   }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<vector<int>>result = zigzagLevelOrder(root);

    for (const auto& row : result)
    {
       for( const auto& ele : row){
        cout<<ele<<" ";
       }
        
    }
    
}