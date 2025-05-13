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

Node* SortedArrToBST(vector<int>& arr, int start, int end) {
   
    if (start > end) return NULL;
    int mid = (start + end) / 2; 

    Node* root = new Node(arr[mid]); 
    root->left = SortedArrToBST(arr, start, mid-1); 
    root->right = SortedArrToBST(arr, mid + 1, end);
    return root;
}

void InOrderTraversal(Node *root) {
    if (root == NULL) return;
    InOrderTraversal(root->left);
    cout << root->data << " "; 
    InOrderTraversal(root->right); 
}

int main() {
    vector<int> arr = {-10, -3, 0, 5, 9}; 
    int start = 0;
    int end = arr.size() - 1;
    Node* result = SortedArrToBST(arr, start, end); 
    InOrderTraversal(result); 
    cout << endl; 
    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(N)