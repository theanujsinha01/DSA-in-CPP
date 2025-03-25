#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; //  not prime
    }

    for (int i = 2; i<n; i++) {
        if (n % i == 0) {
            return false; // If n is divisible by i, it's not prime
        }
    }

    return true; // No divisors found, it's prime
}

void printPrimesInRange(int low, int high) {
    cout << "Prime numbers between " << low << " and " << high << " are:" << endl;
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Print prime number
        }
    }
    cout << endl; 
}

int main() {
    int low, high;

    cout << "Enter the lower bound of the range: ";
    cin >> low; // Input the lower bound
    cout << "Enter the upper bound of the range: ";
    cin >> high; // Input the upper bound
    printPrimesInRange(low, high);

    return 0; 
}
