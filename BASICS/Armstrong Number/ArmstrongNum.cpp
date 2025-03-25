#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, originalNum, lastDigit, ans = 0;

    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (num != 0) {
        lastDigit = num % 10;  // Extract the last digit  
        ans = ans+(lastDigit*lastDigit*lastDigit);  // Add cube of the digit to result
        num = num / 10;  // Remove the last digit              
    }
    if (ans == originalNum)
        cout << originalNum<< " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
