#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string result = ""; 
    int carry = 0; 
    int i = a.size() - 1, j = b.size() - 1; 

    while (i >= 0 || j >= 0 || carry != 0) {
        
        int val1 = 0, val2 = 0;
        if (i >= 0) {
            val1 = val1 + a[i] - '0'; 
            i--;
        }

        if (j >= 0) {
            val2 = val2 + b[j] - '0';
            j--;
        }
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        result = to_string(sum % 10) + result;
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
