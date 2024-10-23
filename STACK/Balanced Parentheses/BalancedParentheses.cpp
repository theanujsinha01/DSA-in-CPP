#include <bits/stdc++.h>
using namespace std;

bool areParenthesesBalanced( string& expression) {
    stack<char> s; // Stack to keep track of opening parentheses

    for (char ch : expression) {
        // If the character is an opening parenthesis, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // If it's a closing parenthesis, check for matching opening
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If stack is empty or top doesn't match, it's unbalanced
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                return true;
            }
            s.pop(); // Pop the matched opening parenthesis
        }
    }
    
    // If the stack is empty at the end, parentheses are balanced
    return s.empty();
}

int main() {
    string expression;

    cout << "Enter an expression: ";
    getline(cin, expression); // Get the entire line of input

    if (areParenthesesBalanced(expression)) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}
