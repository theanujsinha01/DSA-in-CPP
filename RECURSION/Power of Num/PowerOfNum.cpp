#include <bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    if (b == 0)  // Base case: any number raised to power 0 is 1
        return 1;
    return a * power(a, b - 1);  // Recursive call: multiply 'a' by power of 'a' raised to (b - 1)
}

int main() {
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}
