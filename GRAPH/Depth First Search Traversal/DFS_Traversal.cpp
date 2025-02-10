#include <bits/stdc++.h>
using namespace std;

vector<int> dfsOfGraph(int V, vector<vector<int>>& adj) {
    vector<int> result;
    vector<bool> visited(V, false);
    stack<int> st;
        
    st.push(0);
        
    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            visited[node] = true;
            result.push_back(node);
            
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    st.push(neighbor);
                }
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

    vector<int> result = dfsOfGraph(V, adj);
    
    for (int x : result) {
        cout << x << " ";
    }
    
    return 0;
}
