#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st; // Stack for storing opening brackets

    for (char ch : s) {
        // If it's an opening bracket, push it onto the stack
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } 
        // If it's a closing bracket
        else {
            // Check if stack is empty or top doesn't match
            if (st.empty() || (ch == ')' && st.top() != '(') || 
                (ch == '}' && st.top() != '{') || 
                (ch == ']' && st.top() != '[')) {
                return false; // Not balanced
            }
            st.pop(); 
        }
    }
    return st.empty(); // Return true if all brackets are matched
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the input string

    cout << (isValid(str) ? "The string has balanced parentheses." : "The string does not have balanced parentheses.") << endl;

    return 0;
}
