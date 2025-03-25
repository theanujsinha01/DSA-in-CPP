#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int n = min(a,b);
    int gcd = 1; 
    for (int i = 1; i <= n; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }
    return gcd; 
}

// Function to calculate LCM (Least Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;

    return 0;
}
