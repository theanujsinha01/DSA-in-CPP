#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=dp[i>>1]+(i&1);
    }
    cout<<"Number of bits: ";
    for(int i=0;i<=n;i++){
        cout<<i<<"-> "<<dp[i]<<endl;
    }
    return 0;
}