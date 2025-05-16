#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i<n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; 

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0; 
}
// time complexity = O(n)
// space complexity = O(1)
//----------------------------------------------------------------------------------
// pseudo code

// Start

// Input number

// Call isPrime(number)

// Function isPrime(n):
//     If n < 2:
//         Return false

//     For i from 2 to n-1:
//         If n % i == 0:
//             Return false

//     Return true

// If isPrime is true:
//     Print "Prime number"
// Else:
//     Print "Not a prime number"

// End
//----------------------------------------------------------------------------------