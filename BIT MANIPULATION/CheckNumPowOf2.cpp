#include <bits/stdc++.h> 
using namespace std;

bool isPowerOfTwo(int n) {
    if((n & (n - 1)) == 0){
        return true; // n is a power of two
    } else {
        return false; // n is not a power of two
    }
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}
//time complexity: O(1)
//space complexity: O(1)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function isPowerOfTwo(n):
//     If (n & (n - 1)) == 0:
//         Return true
//     Else:
//         Return false

// Input num

// If isPowerOfTwo(num):
//     Print num + " is a power of two."
// Else:
//     Print num + " is not a power of two."

// End
// ----------------------------------------------------------------------------------
