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
    map<int,int> mp;
    while (mp.count(n) == 0) {
        mp[n]++;
        n = solve(n); 
         
    }
    if (n == 1) return true;
    else {
        return false;
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
