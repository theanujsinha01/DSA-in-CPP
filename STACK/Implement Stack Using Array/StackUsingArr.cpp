#include <iostream>
using namespace std;

#define SIZE 10 // Size of the stack

int stack[SIZE]; // Array to store stack elements
int top = -1;    // Index of the top element (-1 means stack is empty)

// Function to push an element onto the stack
void push(int value) {
    if (top == SIZE - 1) {
        cout << "Stack is full! Overflow.\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed onto the stack.\n";
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        cout << "Stack is empty! Underflow.\n";
    } else {
        cout << stack[top] << " popped from the stack.\n";
        top--;
    }
}

// Function to display all elements in the stack
void display() {
    if (top == -1) {
        cout << "Stack is empty!\n";
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) { // Print from top to bottom
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    push(40);
    display();

    return 0;
}
// time complexity: O(1) for push and pop operations
// space complexity: O(n) for the stack array
