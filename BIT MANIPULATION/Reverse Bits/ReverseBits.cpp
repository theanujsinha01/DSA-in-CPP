#include <iostream>
using namespace std;

int countBits(unsigned int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n = n >> 1;  
    }
    return count;
}

// Function to reverse bits for a number
unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    int totalBits = countBits(n);  
    
    for (int i = 0; i < totalBits; i++) {
        result = result << 1;       // Left shift result to make space for the new bit
        result = result | (n & 1);         // Add the least significant bit of n to result
        n = n >> 1;                   // Right shift n to get the next bit
    }
    
    return result;
}

int main() {
    unsigned int num = 8;  // Example input: 19 in decimal (binary 10011)
    cout << "Original number: " << num << endl;
    
    unsigned int reversed = reverseBits(num);
    cout << "Reversed bits number: " << reversed << endl;

    return 0;
}
