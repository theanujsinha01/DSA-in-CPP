#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + num % 10;  // Add the last digit to sum
        num = num / 10;        // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << endl;

    return 0;
}
