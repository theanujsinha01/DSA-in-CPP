#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int V, vector<vector<int>>& adj) {
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

int main() {
    int V = 5;
    vector<vector<int>> adj = {
        {1, 2}, {0, 4}, {0, 3}, {2}, {1}
    };

    vector<int> result = bfs(V, adj);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
// Time Complexity: O(V + E)
// Space Complexity: O(V)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function bfs(V, adj):
//     Initialize result as empty list
//     Initialize visited array of size V with false
//     Initialize queue q
//     Push 0 into q
//     Mark visited[0] = true

//     While q is not empty:
//         node = q.front()
//         Pop q
//         Add node to result
//         For each neighbor in adj[node]:
//             If visited[neighbor] is false:
//                 Push neighbor into q
//                 Mark visited[neighbor] = true

//     Return result

// Set V = 5
// Set adj = [[1, 2], [0, 4], [0, 3], [2], [1]]

// result = bfs(V, adj)

// Print all elements in result

// End
// ----------------------------------------------------------------------------------
