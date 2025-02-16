#include <iostream>
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
