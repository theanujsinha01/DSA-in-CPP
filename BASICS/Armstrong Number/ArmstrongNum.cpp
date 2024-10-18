#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, originalNum, lastDigit, ans = 0;

    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        lastDigit = originalNum % 10;  
        ans = ans+(lastDigit*lastDigit*lastDigit);  // Add cube of the digit to result
        originalNum = originalNum / 10;                    
    }
    if (ans == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
