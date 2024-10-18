#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swapping using addition and subtraction
    a = a + b; // a becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
