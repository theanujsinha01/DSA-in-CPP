#include <iostream>
using namespace std;

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    int n = (a > b) ? b : a; 
    int gcd = 1; 
    for (int i = 1; i <= n; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }
    return gcd; 
}


int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;

    return 0;
}
