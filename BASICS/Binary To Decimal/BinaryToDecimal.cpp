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