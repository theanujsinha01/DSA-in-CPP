#include<bits/stdc++.h>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    // Print the first two terms
    cout << "Fibonacci Series: " << a << " " << b << " ";

    // Loop to calculate and print the rest of the terms
    for (int i = 3; i <= n; ++i) {
        nextTerm = a + b;
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // Print the Fibonacci series
    if (n >= 2) {
        printFibonacci(n);
    } else {
        cout << "The number of terms must be greater than or equal to 2." << endl;
    }

    return 0;
}