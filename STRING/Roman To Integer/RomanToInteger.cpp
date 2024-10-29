#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    
    for (int i = 0; i < s.size(); i++) {
        // Check if the current value is less than the next value
        if (i < s.size() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
            total -= romanMap[s[i]]; // Subtract if current is less than next
        } else {
            total += romanMap[s[i]]; // Add otherwise
        }
    }

    return total;
}

int main() {
    string roman;
    cout << "Enter Roman numeral: ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "Integer value: " << result << endl;

    return 0;
}
