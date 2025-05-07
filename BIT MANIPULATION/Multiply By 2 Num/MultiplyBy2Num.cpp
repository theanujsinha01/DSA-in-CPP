#include <iostream>
using namespace std;

int multiply(int A, int B) {
    int result = 0; // Initialize result

    // Iterate through each bit of B
    while (B > 0) {
        // If the last bit of B is set, add A shifted by the position to result
        if (B & 1) {
            result = result + A;
        }
        
        // Shift A to the left (multiply by 2)
        A = A << 1;
        // Shift B to the right (divide by 2)
        B = B >> 1;
    }
    
    return result; // Return the result
}

int main() {
    int A = 6;  // Example number A
    int B = 7;  // Example number B

    int result = multiply(A, B);
    
    cout << "Product of " << A << " and " << B << " is: " << result << endl;

    return 0;
}
