#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int binaryNum;
    cin>>binaryNum;
    int i = 0, ans = 0;
    while(binaryNum != 0){
        int digit =  binaryNum % 10;
    
        ans = ans + (digit*pow(2, i));
        
        binaryNum = binaryNum/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
 

}
//time complexity: O(d), where d is the number of digits in the binary number.
// Space complexity: O(1), as we are using a constant amount of space for variables.

// Algorithm: Convert a Binary Number to Decimal
// Start

// Input integer binaryNum, initialize ans = 0, i = 0.

// While binaryNum ≠ 0:

// Extract last digit digit = binaryNum % 10, add digit × 2^i to ans.

// Update ans = ans + (digit × pow(2, i)), binaryNum = binaryNum / 10, increment i.

// Print ans (decimal equivalent).

// End.