#include <bits/stdc++.h>
using namespace std;

string itoa(int num) {
    
    if (num == 0) return "0";

    bool isNegative = false; // To track if the number is negative
    if (num < 0) {
        isNegative = true; 
        num = -num; 
    }

    string result; // To store the result string

    while (num > 0) {
        char digit = (num % 10) + '0'; 
        result = digit + result; 
        num /= 10;
    }

    // If the number was negative, prepend the minus sign
    if (isNegative) {
        result = '-' + result;
    }

    return result; 
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number; 

    string str = itoa(number); 
    cout << "String representation: " << str << endl; 

    return 0;
}
