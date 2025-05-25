#include <bits/stdc++.h>
using namespace std;

class Stack {
    vector<int> stack;

public:
    void push(int value) {
        stack.push_back(value);
        cout << value << " pushed onto the stack.\n";
    }

    void pop() {
        if (stack.empty()) {
            cout << "Stack is empty! Underflow.\n";
        } else {
            cout << stack.back() << " popped from the stack.\n";
            stack.pop_back();
        }
    }

    void display() {
        if (stack.empty()) {
            cout << "Stack is empty!\n";
        } else {
            cout << "Stack elements: ";
            for (int i = stack.size() - 1; i >= 0; i--) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    s.push(40);
    s.display();

    return 0;
}

// time complexity: O(1) for push and pop operations
// space complexity: O(n) for the stack array
