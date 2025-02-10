#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<vector<int>>& adj) {
    vector<int> result;
    vector<bool> visited(V, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return result;
}


// Example usage
int main() {
    int V = 5;
    vector<vector<int>> adj = {
        {2, 3}, {4}, {0, 4}, {0}, {1, 2}
    };

    vector<int> result = bfsOfGraph(V, adj);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
