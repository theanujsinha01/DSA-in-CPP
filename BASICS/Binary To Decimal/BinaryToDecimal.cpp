#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int binaryNum;
    cin>>binaryNum;
    int i =0, ans = 0;
    while(binaryNum != 0){
        int digit =  binaryNum % 10;
        if(digit == 1){
            ans = ans +(digit*pow(2, i));
        }
        binaryNum = binaryNum/10;
        i++;
    }
    cout<<"Decimal equivalent: "<<ans<<endl;
    return 0;
 

}