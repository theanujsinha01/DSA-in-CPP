#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swapping using XOR
    a = a ^ b; // a becomes a XOR b
    b = a ^ b; // b becomes a XOR b XOR b = a
    a = a ^ b; // a becomes a XOR b XOR a = b

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
