#include <bits/stdc++.h>
using namespace std;

int main() {
    // Max-heap priority queue (default behavior)
    priority_queue<int> pq;

    // Insert elements
    pq.push(40);
    pq.push(10);
    pq.push(30);
    pq.push(50);

    cout << "Priority Queue elements (Max-Heap):\n";
    // Print and remove elements from the priority queue
    while (pq.size()>0) {
        cout << pq.top() << " ";  // Access the top element (largest element)
        pq.pop();                 // Remove the top element
    }
    cout << endl;

    // Min-heap priority queue (for smallest element priority)
    priority_queue<int, vector<int>, greater<int>> min_pq;

    // Insert elements
    min_pq.push(40);
    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(50);

    cout << "Priority Queue elements (Min-Heap):\n";
    // Print and remove elements from the priority queue
    while (min_pq.size()>0) {
        cout << min_pq.top() << " ";  // Access the top element (smallest element)
        min_pq.pop();                 // Remove the top element
    }
    cout << endl;

    return 0;
}
