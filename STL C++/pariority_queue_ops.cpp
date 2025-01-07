#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(15);

    cout << "Priority Queue (max-heap): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
