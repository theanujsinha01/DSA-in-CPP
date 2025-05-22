#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') st.push(ch);
        else if (st.empty() || (ch == ')' && st.top() != '(') || 
                 (ch == '}' && st.top() != '{') || (ch == ']' && st.top() != '[')) 
            return false;
        else st.pop();
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (isValid(s) ? "Balanced" : "Not Balanced") << endl;
}
// time complexity: O(n), where n is the length of the string s.
// space complexity: O(n), where n is the length of the string s, due to the stack used for storing opening brackets.

// --------------------------------------------------
// Pseudo code for checking balanced parentheses

// Start

// Input string s
// Create an empty stack st

// For each character ch in s:
//    If ch is '(', '[', or '{':
//        Push ch to st
//    Else:
//        If stack st is empty:
//            Return false
//        Else if ch is ')' and top of st is not '(':
//            Return false
//        Else if ch is ']' and top of st is not '[':
//            Return false
//        Else if ch is '}' and top of st is not '{':
//            Return false
//        Else:
//            Pop from st

// If stack st is empty:
//    Return true
// Else:
//    Return false

// End
// --------------------------------------------------
