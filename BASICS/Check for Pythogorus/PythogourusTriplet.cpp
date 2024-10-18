#include<bits/stdc++.h>
using namespace std;

bool isPythagoreanTriplet(int a, int b, int c) {
    // Sort the numbers so that the largest is assumed to be 'c'
    int x = max(a, max(b, c));
    int y, z;
    
    if (x == a) {
        y = b;
        z = c;
    } else if (x == b) {
        y = a;
        z = c;
    } else {
        y = a;
        z = b;
    }
    
    // Check if the sum of the squares of the two smaller numbers equals the square of the largest number
    return (x * x == y * y + z * z);
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (isPythagoreanTriplet(a, b, c)) {
        cout << "The numbers form a Pythagorean triplet." << endl;
    } else {
        cout << "The numbers do not form a Pythagorean triplet." << endl;
    }

    return 0;
}
