#include <bits/stdc++.h>
using namespace std;

bool isParenthesisBalanced(string& s) {
    stack<char> st;
    for (char ch : s) {
        // Push opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        // Check for closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false; // Unbalanced if stack is empty
            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop(); // Pop matched opening bracket
            } else {
                return false; // Mismatched bracket
            }
        }
    }
    return st.empty(); // Balanced if stack is empty
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isParenthesisBalanced(s)) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }
    return 0;
}
