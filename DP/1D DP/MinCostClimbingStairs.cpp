#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    vector<int> cost(n);
    cout<<"Enter the cost of each stair: ";
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int oneStep=cost[i-1]+dp[i-1];
        int twoStep=cost[i-2]+dp[i-2];
        dp[i]=min(oneStep,twoStep);
    }
    cout<<"Minimum cost to climb the stairs: ";
    cout<<dp[n];
    return 0;
}