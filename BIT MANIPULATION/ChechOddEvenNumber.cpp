#include <iostream>
using namespace std;

//bitwise AND Operation num and 1
bool isEven(int n) {
    if(n & 1 != 0){
        return false;
    }

    return true ; // Returns true if even, false if odd
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}
// time complexity: O(1)
// space complexity: O(1)

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Function isEven(n):
//     If (n & 1) != 0:
//         Return false
//     Return true

// Input num

// If isEven(num):
//     Print num + " is even."
// Else:
//     Print num + " is odd."

// End
// ----------------------------------------------------------------------------------

