#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> s, minS;
public:
    void push(int x) {
        s.push(x);
        if (minS.empty() || x <= minS.top()) minS.push(x);
    }
    void pop() {
        if (s.top() == minS.top()) minS.pop();
        s.pop();
    }
    int top() { return s.top(); }
    int getMin() { return minS.top(); }
};

int main() {
    MinStack st;
 
    st.push(2); 
    st.push(1);
    st.push(1);
    st.pop();
    cout << "Top: " << st.top() << "\n";
    cout << "Min: " << st.getMin() << "\n";
}
// time complexity: O(1) for all operations
// space complexity: O(n) for the stack

//.............................................................................
// Pseudocode for MinStack

// Start

// Create two stacks: mainStack and minStack

// push(x):
//   push x into mainStack
//   if minStack is empty or x <= top of minStack:
//       push x into minStack

// pop():
//   if top of mainStack == top of minStack:
//       pop from minStack
//   pop from mainStack

// top():
//   return top of mainStack

// getMin():
//   return top of minStack

// End
//.............................................................................
