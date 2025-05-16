#include <bits/stdc++.h>
using namespace std;

int powerFunction(int base, int power) {
    int result = 1;

    // Multiply base power times
    for (int i = 0; i < power; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> power;

    cout << base << " raised to the power " << power << " is " <<  powerFunction(base, power) << endl;

    return 0;
}

// time complexity: O(n), where n is the exponent.
// space complexity: O(1), as we are using a constant amount of space for variables.
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input base
// Input power

// Set result = 1

// For i = 0 to power - 1:
//     result = result * base

// Print result

// End
// ----------------------------------------------------------------------------------