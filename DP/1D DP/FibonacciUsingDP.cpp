#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of nth fibonacci: ";
    cin>>n;
    if(n<=1)
    {
        cout<<"Fibonacci number is: ";
        cout<<n;
        return 0;
    }
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<"Fibonacci number is: ";
    cout<<dp[n];
    return 0;
}