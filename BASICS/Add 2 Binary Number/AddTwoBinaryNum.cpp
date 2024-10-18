#include <iostream>
using namespace std;

string addBinary(string a, string b) {
    string result = "";  // To store the sum
    int carry = 0;  // To store carry
    int i = a.length() - 1, j = b.length() - 1;  // Pointers to traverse the strings

    // Traverse both strings from the rightmost end
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        // Add digit from first binary number
        if (i >= 0) {
            sum += a[i] - '0';  // Convert char to int
            i--;
        }

        // Add digit from second binary number
        if (j >= 0) {
            sum += b[j] - '0';  // Convert char to int
            j--;
        }

        // Append the sum to result
        result = char(sum % 2 + '0') + result;
        
        // Update carry
        carry = sum / 2;
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
