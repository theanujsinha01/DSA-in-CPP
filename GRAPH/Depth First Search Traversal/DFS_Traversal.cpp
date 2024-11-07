#include<bits/stdc++.h>
using namespace std;

void dfs(int source, unordered_map<int,vector<int>>& graph, int n, vector<int>&visited){
    
    cout<<source<<" ";
    visited[source] = 1;
    for(auto nbr : graph[source]){
        if(!visited[nbr]){
            dfs(nbr, graph, n, visited);
        }
    }
}

int main(){
    
    vector<vector<int>> edgeList = {
        {0, 1}, {1, 4}, {1, 2}, {2, 3}
    };
    int nodes = 5;
    unordered_map<int,vector<int>>graph;
    for(int i=0; i<edgeList.size(); i++){
        int a = edgeList[i][0];
        int b = edgeList[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>visited(nodes);
    dfs(0, graph, nodes,visited);

}