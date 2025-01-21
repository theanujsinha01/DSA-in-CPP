#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;

    if(n<=2){
        cout<<"Number of ways to climb the stairs: ";
        cout<<n;
        return 0;
    }
    
    int dp[n+1];
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<"Number of ways to climb the stairs: ";
    cout<<dp[n];
    return 0;
}