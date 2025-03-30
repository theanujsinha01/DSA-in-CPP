#include <bits/stdc++.h>
using namespace std;

// Function to clear the rightmost set bit
int clearRightmostSetBit(int n) {
    return n & (n - 1); // Clear the rightmost set bit
}

int main() {
    int number = 5; // Example input (binary: 10010)
    int clearedNumber = clearRightmostSetBit(number);
    
    cout << "The number after clearing the rightmost set bit of " << number << " is: " << clearedNumber << endl;

    return 0;
}
//time complexity: O(1)
//space complexity: O(1)
