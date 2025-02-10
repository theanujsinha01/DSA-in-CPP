#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans) {
        visited[node] = true;
        ans.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<vector<int>>& adj) {
        vector<bool> visited(V, false);
        vector<int> ans;
        dfs(0, adj, visited, ans);
        return ans;
    }
};

// Example usage
int main() {
    int V = 5;
    vector<vector<int>> adj = {
        {1, 2}, {0, 4}, {0, 3}, {2}, {1}
    };

    Solution obj;
    vector<int> result = obj.dfsOfGraph(V, adj);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
