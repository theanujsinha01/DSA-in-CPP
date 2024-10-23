#include <bits/stdc++.h>
using namespace std;

#define MAX 100 // Maximum size of the stack

class Stack {
    public:

    int arr[MAX];
    int top;     

    Stack() {
        top = -1; // Stack is initially empty
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    // Function to add an item to the stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed to stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from empty stack" << endl;
            return -1; 
        }
        return arr[top--]; // Return top element and decrement top
    }

    // Function to return the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 if stack is empty
        }
        return arr[top]; // Return top element
    }
};

int main() {
    Stack stack; // Create a stack

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl; // Should print 30

    cout << stack.pop() << " popped from stack" << endl; // Should print 30

    cout << "Top element is: " << stack.peek() << endl; // Should print 20

    return 0;
}
