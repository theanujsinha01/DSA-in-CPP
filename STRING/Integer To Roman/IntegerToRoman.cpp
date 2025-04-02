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
// Time Complexity: O(n), where n is the number of digits in the integer. Each digit is processed once.
// Space Complexity: O(1), if we consider the space used by the output string to be constant. However, if we consider the space used by the input integer, it would be O(log n) for the output string.
