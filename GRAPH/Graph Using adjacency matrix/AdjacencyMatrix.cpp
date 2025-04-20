#include<bits/stdc++.h>
using namespace std;

void printGraph( vector<vector<int>>& adjacencyMatrix){
    for(int i = 0; i < adjacencyMatrix.size(); i++){
        cout << "Node " << i << " Neighbors: ";
        for(int j = 0; j < adjacencyMatrix[i].size(); j++){
            if(adjacencyMatrix[i][j] == 1){
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

int main(){
  
    vector<vector<int>> edgeList = {
        {0, 1}, {1, 2}, {2, 3}, {3, 0}
    };
    
    int nodeCount = 4; // Number of nodes
    vector<vector<int>> adjacencyMatrix(nodeCount, vector<int>(nodeCount, 0));

    // Populate the adjacency matrix from edge list
    for(int i = 0; i < edgeList.size(); i++){
        int a = edgeList[i][0];  
        int b = edgeList[i][1];  
        adjacencyMatrix[a][b] = 1;
        adjacencyMatrix[b][a] = 1;   
    }

    printGraph(adjacencyMatrix);
    return 0;
}
// Time Complexity: O(E)
// Space Complexity: O(V^2)
