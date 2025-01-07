#include <iostream>
#include <cmath> // For log2 function
using namespace std;

// Function to get the rightmost set bit
int getRightmostSetBit(int n) {
    return n & -n; // -n is the two's complement
}

// Function to get the position of the rightmost set bit
int getRightmostSetBitPosition(int n) {
    return log2(n & -n) + 1; // log2 gives the index of the set bit
}

int main() {
    int number = 8; // Example input (binary: 1000)
    int rightmostSetBit = getRightmostSetBit(number);
    int position = getRightmostSetBitPosition(number);
    
    cout << "The rightmost set bit of " << number << " is at position: " << position << endl;

    return 0;
}

