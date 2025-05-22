#include <bits/stdc++.h>
using namespace std;
// Function to find the K-th bit of a number
int findKthBit(int number, int K) {
     
    int bit = number >> K;
    bit = bit & 1; // Extract the K-th bit
    return bit; // Return the K-th bit
}

int main() {
    int number = 8; // Example input (binary: 1000)
    int K = 3;       // We want to find the 1st bit (0-indexed)
    int kthBit = findKthBit(number, K);
    
    cout << "The " << K << "-th bit of " << number << " is: " << kthBit << endl;
    return 0;
}
// time complexity: O(1)
// space complexity: O(1)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function findKthBit(number, K):
//     bit = number >> K         // Right shift number by K positions
//     bit = bit & 1             // Extract the K-th bit by AND with 1
//     Return bit                // Return the K-th bit

// Input number = 8
// Input K = 3

// kthBit = findKthBit(number, K)

// Print "The " + K + "-th bit of " + number + " is: " + kthBit

// End
// ----------------------------------------------------------------------------------
