#include <bits/stdc++.h>
using namespace std;

string removeDuplicatesUsingStack(string str) {
    stack<char> s;              
    unordered_set<char> seen;     

    for (char ch : str) {
        // If the character hasn't been seen, push it to the stack
        if (seen.count(ch) == 0) {
            s.push(ch);
           
        }
        seen.insert(ch);
    }

    // Create a result string from the stack
    string result = "";
    while (s.size()>0) {
        result =  s.top() + result;  // Add characters from stack to result
        s.pop();
    }

    return result;
}

int main() {
    string str = "ABBCCDDE";

    cout << "Original string: " << str << endl;
    cout << "String after removing duplicates: " << removeDuplicatesUsingStack(str) << endl;

    return 0;
}
