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
// Time Complexity: O(n), where n is the length of the string s. Each character is processed once.
// Space Complexity: O(n), in the worst case, all characters are opening brackets and are stored in the stack.
