#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of houses: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the amount of money in each house: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=nums[0];
    for(int i=2;i<=n;i++){
        int pick=nums[i-1]+dp[i-2];
        int notPick=dp[i-1];
        dp[i]=max(pick,notPick);
    }
    cout<<"Maximum amount of money that can be robbed: ";
    cout<<dp[n];
    return 0;
}