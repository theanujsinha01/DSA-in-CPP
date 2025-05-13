#include <bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int>& q) {
    stack<int> s;

    // Step 1: Transfer elements from the queue to the stack
    while (q.size() > 0) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Transfer elements back from the stack to the queue
    while (s.size() > 0) {
        q.push(s.top());
        s.pop();
    }
    return q;  // Return the reversed queue
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
  
    queue<int> ans =  reverseQueue(q); 
    cout << "Reversed Queue: ";
    while (ans.size()>0) {
        cout << ans.front() << " ";
        ans.pop();
    }
    return 0;
}
