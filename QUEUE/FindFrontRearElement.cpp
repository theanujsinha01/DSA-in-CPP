#include <bits/stdc++.h>
using namespace std;

void findFrontAndRear(queue<int>& q) {
    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;  // Access the front element
        cout << "Rear element: " << q.back() << endl;    // Access the rear element
    } else {
        cout << "Queue is empty\n";
    }
}

int main() {
   
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    findFrontAndRear(q); // Find front and rear elements
    return 0;
}
// Time complexity: O(1) for both front() and back()
// Space complexity: O(1) as we are not using any extra space
