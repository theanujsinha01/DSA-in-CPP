#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int decimalNum;
    cin>>decimalNum;
    int i =0, ans = 0;
    while(decimalNum != 0){
        int bit = decimalNum & 1;
        ans = ans + (bit * pow(10, i));
        decimalNum = decimalNum >> 1;
        i++;
    }
    cout<<"Binary equivalent: "<<ans<<endl;
    return 0;
 

}