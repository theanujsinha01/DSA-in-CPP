#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string result = ""; 
    int carry = 0; 
    int i = a.size() - 1, j = b.size() - 1; 

    while (i >= 0 || j >= 0 || carry != 0) {
        int val1 = (i >= 0) ? a[i] - '0' : 0;
        int val2 = (j >= 0) ? b[j] - '0' : 0;
        
        int sum = val1 + val2 + carry;
        carry = sum / 2;  
        result = to_string(sum % 2) + result;  // Binary digit
        
        i--;
        j--;
    }

    return result;
}

int main() {
    string a, b;
    cout << "Enter first binary number: ";
    cin >> a;
    
    cout << "Enter second binary number: ";
    cin >> b;

    string sum = addBinary(a, b);
    cout << "Sum: " << sum << endl;

    return 0;
}
//time complexity: O(max(m, n)), where m and n are the lengths of the two binary strings.
// Space complexity: O(max(m, n)), for the result string.

// Start

// Input binary strings a and b. Initialize result = "", carry = 0, i = len(a) - 1, j = len(b) - 1.

// While i ≥ 0 OR j ≥ 0 OR carry ≠ 0:

// Set val1 = a[i] - '0' if i ≥ 0, else 0; set val2 = b[j] - '0' if j ≥ 0, else 0.

// Compute sum = val1 + val2 + carry, update carry = sum / 2.

// Append (sum % 2) to the front of result.

// Decrement i and j.

// Print result as the binary sum.

// End.