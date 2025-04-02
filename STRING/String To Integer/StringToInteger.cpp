#include <bits/stdc++.h>
using namespace std;

int myAtoi(const string& str) {
    int i = 0, sign = 1, total = 0;
    while (str[i] == ' ') i++;  // Skip spaces
    if (str[i] == '-') sign = -1, i++;  // Handle negative sign
    while (str[i] == '0') i++;  // Skip leading zeros
    while (isdigit(str[i])) total = total * 10 + (str[i++] - '0');
    return total * sign;
}

int main() {
    string str;
    getline(cin, str);
    cout << myAtoi(str) << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(1)
