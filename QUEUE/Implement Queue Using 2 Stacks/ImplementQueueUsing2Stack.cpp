#include <bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    // Enqueue an element into the queue
    void enqueue(int x) {
        s1.push(x);
        cout << x << " enqueued to the queue\n";
    }

    // Dequeue an element from the queue
    int dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        // Move elements from s1 to s2 if s2 is empty
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        int topVal = s2.top();
        s2.pop();
        cout << topVal << " dequeued from the queue\n";
        return topVal;
    }

    // Get the front element
    int front() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    // Check if the queue is empty
    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element is: " << q.front() << endl;

    q.dequeue();
    q.enqueue(40);
    q.dequeue();

    cout << "Front element is: " << q.front() << endl;
    return 0;
}
