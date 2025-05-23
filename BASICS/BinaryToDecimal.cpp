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

/*-----------------------------------------------------------------------------
Start

Input binaryNum
Set i = 0
Set ans = 0

While binaryNum is not 0:
    digit = binaryNum % 10
    ans = ans + (digit × 2^i)
    binaryNum = binaryNum / 10
    i = i + 1

Print ans

End
--------------------------------------------------------------------------------*/