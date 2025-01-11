#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of squares of digits
int solve(int num) {
    int ans = 0;
    while (num != 0) {
        int last_digit = num % 10;
        ans += last_digit * last_digit;
        num = num / 10;
    }
    return ans;
}

// Function to check if a number is a Happy Number
bool isHappy(int n) {
    set<int> st;
    while (1) {
        if (n == 1) {
            return true; 
        }
        n = solve(n); 
        if (st.count(n)) {
            return false; // Detected a cycle
        }
        st.insert(n); // Track visited numbers
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isHappy(n)) {
        cout << n << " is a happy number.\n";
    } else {
        cout << n << " is not a happy number.\n";
    }

    return 0;
}
