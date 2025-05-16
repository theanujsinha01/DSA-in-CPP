#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans = 0;
    while(n != 0){
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n = n/ 10;
    }
    cout<<"Reversed number: "<<ans<<endl;
    return 0;

}

// time complexity: O(d), where d is the number of digits in the number.
// space complexity: O(1), as we are using a constant amount of space for variables.

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input n
// Set ans = 0

// While n is not 0:
//     lastDigit = n % 10
//     ans = ans * 10 + lastDigit
//     n = n / 10   // Remove last digit

// Print ans  

// End
// ----------------------------------------------------------------------------------