#include<bits/stdc++.h>
using namespace std;

int findSetBitPos(int n) {
    if (n == 0) return 0;
    if((n&(n-1))!=0){ // If n is not a power of 2
          return -1;
    }
    int pos = 1;
    while (n) {
        if (n & 1) break;
        n = n >> 1;
        pos++;
    }
    return pos;
}
int main() {
    int number = 16; // Example input (binary: 1000)
    int position = findSetBitPos(number);
    
    if(position==-1){
        cout<<"Invalid Input"<<endl;
        return 0;
    }else{
        cout << "The rightmost set bit of " << number << " is at position: " << position << endl;
    }

    return 0;
}

// time complexity: O(log n) where n is the number of bits in the number
// space complexity: O(1)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function findSetBitPos(n):
//     If n == 0:
//         Return 0

//     If (n & (n - 1)) != 0:  // Check if n is not a power of 2
//         Return -1

//     Set pos = 1
//     While n is not 0:
//         If (n & 1) == 1:
//             Break
//         n = n >> 1   // Right shift n by 1
//         pos = pos + 1

//     Return pos

// Input number = 16

// position = findSetBitPos(number)

// If position == -1:
//     Print "Invalid Input"
// Else:
//     Print "The rightmost set bit of " + number + " is at position: " + position

// End
// ----------------------------------------------------------------------------------
