#include <iostream>
using namespace std;

// Function to count the number of bits required to convert A to B
int countBitsToConvert(int A, int B) {
    int xorResult = A ^ B; // XOR A and B
    int count = 0;

    // Count the number of set bits in the XOR result
    while (xorResult) {
        count = count + (xorResult & 1); // Increment count if the last bit is set
        xorResult = xorResult >> 1;          // Right shift to check the next bit
    }
    
    return count;
}

int main() {
    int A = 7; // Example input A (binary: 0111)
    int B = 8; // Example input B (binary: 1000)

    int bitCount = countBitsToConvert(A, B);
    
    cout << "Number of bits required to convert " << A << " to " << B << " is: " << bitCount << endl;

    return 0;
}
