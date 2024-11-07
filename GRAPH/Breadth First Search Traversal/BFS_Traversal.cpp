#include<bits/stdc++.h>
using namespace std;

void bfs(int source, unordered_map<int,vector<int>>& graph, int n){
    queue<int>q;
    vector<int>visited(n+1);
    q.push(source);
    visited[source] = 1;

    while(q.size()>0){
        int output = q.front();
        q.pop();
        cout<<output<<"  ";
        for(auto nbr : graph[output]){
            if(!visited[nbr]){
                visited[nbr] = 1;
                q.push(nbr);
            }
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

    bfs(0, graph, nodes);

}