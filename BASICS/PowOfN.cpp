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
