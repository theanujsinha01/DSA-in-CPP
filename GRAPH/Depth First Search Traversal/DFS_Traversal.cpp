#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int V = 5;
    vector<vector<int>> adj = {
        {1, 2}, {0, 4}, {0, 3}, {2}, {1}
    };

    vector<int> result = dfsOfGraph(V, adj);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
// Time Complexity: O(V + E)
// Space Complexity: O(V)