
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a queue of integers
    queue<int> q;

    // Insert elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Access the front and rear elements
    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;  // Access the front element
        cout << "Rear element: " << q.back() << endl;    // Access the rear element
    } else {
        cout << "Queue is empty\n";
    }

    // Dequeue an element (remove front element)
    q.pop();

    // Access the front and rear elements again after dequeue
    if (!q.empty()) {
        cout << "Front element after dequeue: " << q.front() << endl;
        cout << "Rear element after dequeue: " << q.back() << endl;
    } else {
        cout << "Queue is empty\n";
    }

    return 0;
}
