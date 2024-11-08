#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>& visited, vector<vector<int>>& graph, int node) {
    visited[node] = 1;  // Mark the current node as visited
    for (int nbr : graph[node]) {  // Check all neighbors of the current node
        if (!visited[nbr]) {  // If the neighbor is not visited, do a DFS on it
            dfs(visited, graph, nbr);
        }
    }
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<int> visited(n, 0);  // Create a visited array to track visited nodes
    vector<vector<int>> graph(n);  // Adjacency list representation of the graph
    
    // Build the graph from the edges
    for (int i = 0; i < edges.size(); i++) {
        int a = edges[i][0], b = edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);   
    }

    dfs(visited, graph, source);  // Start DFS from the source node
    return visited[destination];  // Check if the destination node was reached
}

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    
    cout << "Enter the number of edges: ";
    cin >> m;
    
    vector<vector<int>> edges(m, vector<int>(2));  // Initialize 2D vector for edges
    cout << "Enter each edge (node1 node2):" << endl;
    for (int i = 0; i < m; ++i) {
        cin >> edges[i][0] >> edges[i][1];
    }
    int source, destination;
    cout << "Enter the source node: ";
    cin >> source;
    cout << "Enter the destination node: ";
    cin >> destination;

      bool ans = validPath(n, edges, source, destination);
      cout<<ans;
  
    return 0;
}

