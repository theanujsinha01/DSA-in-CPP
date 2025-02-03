// Problem :----
/* Given the root of a binary Tree
 return an array containing the path of root to node


                       1        OUTPUT :------
                     /    \      node = 5, { 1,2,5}
                    2      3
                  /  \
                 4    5



  */

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

// Helper function to find the path from root to the given node
bool getPath(Node *root, vector<int> &path, int target)
{
    if (root == NULL)
    {
        return false;
    }

    // Add the current node's data to the path
    path.push_back(root->data);

    // If the current node is the target node, return true
    if (root->data == target)
    {
        return true;
    }

    // Recursively check in the left and right subtrees
    if (getPath(root->left, path, target) || getPath(root->right, path, target))
    {
        return true;
    }

    // If the target is not found in either subtree, remove the current node from the path
    path.pop_back();
    return false;
}

// Function to find the path from the root to the given node
vector<int> pathToNode(Node *root, int target)
{
    vector<int> path;
    if (root == NULL)
    {
        return path; // Return an empty vector if the root is NULL
    }

    // If the target node exists, the path will be populated
    if (getPath(root, path, target))
    {
        return path;
    }

    return {}; // Return an empty vector if the target node is not found
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int target = 3;
    vector<int> result = pathToNode(root, target);

    if (result.empty())
    {
        cout << "Node not found." << endl;
    }
    else
    {

        for (auto ele : result)
        {
            cout << ele << " -> ";
        }
        cout << endl;
    }
}