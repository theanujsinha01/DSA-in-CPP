#include <bits/stdc++.h>
using namespace std;

// Function to calculate nCr
int nCr(int n, int r) {

    int va1 = 1;
    int va2 = 1;
    for (int i = 1; i <= r; i++) {
        va1 = va1*n;
        n--;
        va2 = va2*i;
    }
    return va1 / va2;
}

int main() {
    int n, r;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;
    cout << "nCr = " << nCr(n, r) << endl;
    return 0;
}
