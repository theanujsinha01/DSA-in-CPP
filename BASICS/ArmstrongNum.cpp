#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, originalNum, lastDigit, ans = 0;

    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (num != 0) {
        lastDigit = num % 10;  // Extract the last digit  
        ans = ans+(lastDigit*lastDigit*lastDigit);  // Add cube of the digit to result
        num = num / 10;  // Remove the last digit              
    }
    if (ans == originalNum)
        cout << originalNum<< " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
//time complexity: O(d), where d is the number of digits in the number.
// Space complexity: O(1), as we are using a constant amount of space for variables.

// Algorithm: Check if a Number is an Armstrong Number
// Start

// Input an integer num, store it in originalNum, initialize ans = 0.

// While num ≠ 0:

// Extract last digit lastDigit = num % 10, add its cube to ans.

// ans = ans + (lastDigit * lastDigit * lastDigit), update num = num / 10.

// If ans == originalNum, print "Armstrong number", else print "Not an Armstrong number".

// End.