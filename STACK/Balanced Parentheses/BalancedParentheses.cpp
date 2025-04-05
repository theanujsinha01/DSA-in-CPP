#include <bits/stdc++.h>
using namespace std;

bool isParenthesisBalanced(string& s) {
    stack<char> st;
    for (char ch : s) {
       
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        // Check for closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop(); // Pop matched opening bracket
            } 
        }
    }
    if (st.empty()) {
        return true; // All brackets matched
    } else {
        return false; // Unmatched opening brackets remain
    }
}

int main() {

    string s = "{[({{}}]}"; // Example input
    if (isParenthesisBalanced(s)) {
        cout << "Balanced Parentheses\n";
    } else {
        cout << "Unbalanced Parentheses\n";
    }
    return 0;
}
// // time complexity: O(n)
// // space complexity: O(n)
