#include <bits/stdc++.h>
using namespace std;
//Convert a string to an integer (Implement atoi).
int myAtoi(const string& str) {
    int index = 0, total = 0, sign = 1;

    // Step 1: Skip leading whitespace
    while (str[index] == ' ') {
        index++;
    }

    // Step 2: Check for sign
   
    if(str[index] == '-'){
        sign = -1;
        index++;
    }
        
    
    // check for starting 0
     while(str[index]=='0') index++;
        

    // Step 3: Convert characters to integer
    while (str[index] >= '0' && str[index] <= '9') {
        total = total * 10 + (str[index] - '0'); // Convert char to int
        index++;
    }

    return total * sign; // Return the final result with sign
}

int main() {
    string str;

    cout << "Enter a string to convert to integer: ";
    getline(cin, str); // Allow spaces in the input

    int result = myAtoi(str);
    cout << "The converted integer is: " << result << endl;

    return 0;
}
