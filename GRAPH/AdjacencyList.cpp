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

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function printGraph(graph):
//     For each node and neighbors in graph:
//         Print "Node " + node + ", Neighbors: "
//         For each neighbor in neighbors:
//             Print neighbor + " "
//         Print new line

// edgeList = [[1, 2], [2, 3], [3, 4], [4, 1]]

// Create empty graph as map from int to list of ints

// For each edge in edgeList:
//     a = edge[0]
//     b = edge[1]
//     Add b to graph[a]
//     Add a to graph[b]

// Call printGraph(graph)

// End
// ----------------------------------------------------------------------------------
