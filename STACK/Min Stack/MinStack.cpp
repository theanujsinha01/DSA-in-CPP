#include <bits/stdc++.h>
using namespace std;
 
class MinStack {
    public:
    stack<int> s;        // Regular stack to store elements
    stack<int> minStack;  // Stack to keep track of the minimum element

    void push(int x) {
        s.push(x);
        // If the minStack is empty or the current element is smaller than or equal to the top of minStack, push it onto minStack
        if (minStack.size() == 0 || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    // Remove the top element from the stack
    void pop() {
        if (s.size() == 0) {
            return;
        }
        // If the top of the minStack is the same as the top of the main stack, pop it from minStack as well
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        if (s.empty()) {
            return -1;
        }
        return s.top();
    }

    int getMin() {
        if (minStack.size() == 0) {
            return -1;
        }
        return minStack.top();
    }
};

int main() {
    MinStack minStack;

    minStack.push(1);
    minStack.push(2);
    minStack.push(3);
    minStack.push(4);
    minStack.push(5);
   
   
    
    cout << "Minimum element: " << minStack.getMin() << endl; 
    
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl; 
    cout << "Minimum element: " << minStack.getMin() << endl;

    return 0;
}
