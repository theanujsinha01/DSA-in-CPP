#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        int lastbit = n &1;
        if(lastbit == 1) {
            count++;
        }
        n = n >> 1; // Right shift to check the next bit       
    }
    return count;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    int result = countSetBits(num);
    
    cout << "The number of set bits in " << num << " is: " << result << endl;
    return 0;
}
//time complexity: O(log n) where n is the number of bits in the number
//space complexity: O(1)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function countSetBits(n):
//     Set count = 0
//     While n > 0:
//         lastbit = n & 1
//         If lastbit == 1:
//             count = count + 1
//         n = n >> 1  // Right shift to check next bit
//     Return count

// Input num

// result = countSetBits(num)

// Print "The number of set bits in " + num + " is: " + result

// End
// ----------------------------------------------------------------------------------
