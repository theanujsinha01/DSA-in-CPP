#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>& s, int topElement) {
    // If stack is empty or the top element is smaller than or equal to the current element
    if (s.empty() || s.top() <= topElement) {
        s.push(topElement);
    } else {
        // Remove the top element and recursively insert the element
        int top = s.top();
        s.pop();
        sortedInsert(s, topElement);

        // Push the top element back after the insertion
        s.push(top);
    }
}

void sortStack(stack<int>& s) {
    if (s.size()>0) {
        // Remove the top element
        int topElement = s.top();
        s.pop();

        // Recursively sort the remaining stack
        sortStack(s);

        // Insert the top element back in the sorted stack
        sortedInsert(s, topElement);
    }
}


void printStack(stack<int> s) {
    while (s.size()>0) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Original Stack: ";
    printStack(s);

    sortStack(s);

    cout << "Sorted Stack: ";
    printStack(s);

    return 0;
}
