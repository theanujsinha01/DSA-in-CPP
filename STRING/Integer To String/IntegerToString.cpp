#include <bits/stdc++.h>
using namespace std;

string itoa(int num) {
    if (num == 0) return "0";
    string res = (num < 0 ? "-" : "");
    num = abs(num);
    while (num) {
        res += (num % 10) + '0';
        num /= 10;
    }
    if (res[0] == '-') reverse(res.begin() + 1, res.end());
    else reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << itoa(n) << endl;
}
// Time Complexity: O(log n), where n is the number of digits in the integer. Each digit is processed once.
// Space Complexity: O(1), if we consider the space used by the output string to be constant. However, if we consider the space used by the input integer, it would be O(log n) for the output string.
