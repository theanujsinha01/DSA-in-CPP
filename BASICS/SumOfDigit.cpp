#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int ans = 0;
    while (num != 0) {
        ans = ans + num % 10;  // Add the last digit to sum
        num = num / 10;        // Remove the last digit
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << endl;

    return 0;
}

// time complexity: O(d), where d is the number of digits in the number.
// space complexity: O(1), as we are using a constant amount of space for variables.
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input number
// Set ans = 0

// While number is not 0:
//     lastDigit = number % 10
//     ans = ans + lastDigit
//     number = number / 10   // Remove last digit

// Print ans  // sum of digits

// End
// ----------------------------------------------------------------------------------