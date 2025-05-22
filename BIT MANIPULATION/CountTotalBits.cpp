#include <bits/stdc++.h>
using namespace std;

int countTotalBits(int number) {
   
    if (number == 0) return 1;

    int count = 0;
    while (number > 0) {
        number =  number >> 1; // Right shift the number
        count++;      // Increment the count
    }
    return count; // Return the count of bits
}

int main() {
    int number = 15; // Example number
    int bitCount = countTotalBits(number);
    
    cout << "Total number of bits required to represent " << number << " is: " << bitCount << endl;
    return 0;
}
// time complexity: O(log n) where n is the number of bits in the number
// space complexity: O(1)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function countTotalBits(number):
//     If number == 0:
//         Return 1

//     Set count = 0
//     While number > 0:
//         number = number >> 1   // Right shift number by 1
//         count = count + 1      // Increment count

//     Return count

// Input number = 15  // Example input

// bitCount = countTotalBits(number)

// Print "Total number of bits required to represent " + number + " is: " + bitCount

// End
// ----------------------------------------------------------------------------------
