#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    if (n == 0)  // Base case: if the number is 0, we have 0 digits
        return 0;
    return 1 + countDigits(n / 10);  // Recursive call: reduce the number by one digit
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Special case: If the number is 0, the digit count is 1
    if (number == 0)
        cout << "Number of digits: 1" << endl;
    else
        cout << "Number of digits: " << countDigits(number) << endl;

    return 0;
}
// time complexity: O(log n) because we are dividing the number by 10 in each recursive call
// space complexity: O(log n) because of the recursion stack
