#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
    map<int, string, greater<int>> mp = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"},
        {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string res;
    for (auto x : mp){
        while (num >= x.first) {
            res += x.second;
            num -= x.first;
        }

    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << intToRoman(n);
}
// time complexity: O(n), where n is the number of digits in the input number.
// space complexity: O(1), as we are using a constant amount of extra space for the result string.


// --------------------------------------------------
// Pseudo code to convert an integer to Roman numeral

// Start

// Input integer num
// Create a map mp of integer values to corresponding Roman symbols (in descending order)

// Initialize empty string res to store result

// For each (value, symbol) pair in mp:
//     While num is greater than or equal to value:
//         Append symbol to res
//         Subtract value from num

// Output res

// End
// --------------------------------------------------
