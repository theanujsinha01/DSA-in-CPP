#include <iostream>
using namespace std;

int add(int A, int B) {
    while (B != 0) {
        // Calculate the sum without carry
        int sum = A ^ B;
        // Calculate the carry
        int carry = (A & B) << 1;
        
        // Prepare for the next iteration
        A = sum;
        B = carry;
    }
    return A; // When B is 0, A contains the sum
}

int main() {
    int A = 7; // Example number A
    int B = 1; // Example number B

    int result = add(A, B);
    
    cout << "Sum of " << A << " and " << B << " is: " << result << endl;

    return 0;
}
