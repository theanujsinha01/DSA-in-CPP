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

vector<int> topView(Node *root)
{
    vector<int> ans;
    if (root == NULL) return ans;

    map<int, int> mp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (q.size() > 0)
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *temp = pr.first;
        int hd = pr.second;
 
        if (mp.count(hd) == 0) // if hd is not present in map then insert it
        {
            mp[hd] = temp->data;
        }
        if (temp->left != NULL)
        {
            q.push({temp->left, hd - 1});
        }
        if (temp->right != NULL)
        {
            q.push({temp->right, hd + 1});
        }
       
    }
     // transfer values from map to ans vector
    for (auto it : mp)
    {
        ans.push_back(it.second);
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

    vector<int> result = topView(root);

    for (const auto &ele : result)
    {
        cout << ele << " ";
    }
}