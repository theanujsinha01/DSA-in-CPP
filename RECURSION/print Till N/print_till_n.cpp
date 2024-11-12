#include <iostream>
using namespace std;

void printTillN(int n) {
    if (n == 1) {
        cout << 1 << " ";
        return;
    }
    printTillN(n - 1);  // Recursive call to print numbers till n-1
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printTillN(n);  // Call the function without cout
    cout << endl;   // To end the line after printing the sequence
    return 0;
}

