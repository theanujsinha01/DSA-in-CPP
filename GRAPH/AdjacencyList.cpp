#include<bits/stdc++.h>
using namespace std;

void printGraph(unordered_map<int, vector<int>>& graph){
    for(auto it : graph){
        cout << "Node " << it.first << ", Neighbors: ";
        for(int node : it.second){  
           cout << node << " ";
        }
        cout << endl;
    }
}

int main(){
  
    vector<vector<int>> edgeList = {
        {1, 2}, {2, 3}, {3, 4}, {4, 1}
    };
    
    unordered_map<int, vector<int>>graph;

    for(int i = 0; i < edgeList.size(); i++){
        int a = edgeList[i][0];  
        int b = edgeList[i][1];  
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    printGraph(graph);
    return 0;
}
//  Time Complexity: O(E)
//  Space Complexity: O(V + E)