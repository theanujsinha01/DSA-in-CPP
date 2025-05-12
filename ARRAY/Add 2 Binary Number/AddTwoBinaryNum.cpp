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
    string a = "1101"; // Example binary string 1
    string b = "1011"; // Example binary string 2
    string sum = addBinary(a, b);
    cout << "Sum: " << sum << endl;

    return 0;
}
//time complexity: O(max(m, n)), where m and n are the lengths of the two binary strings.
// Space complexity: O(max(m, n)), for the result string.
