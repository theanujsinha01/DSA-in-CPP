#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
