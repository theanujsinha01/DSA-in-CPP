#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<"Length of longest common subsequence: ";
    cout<<dp[n][m]<<endl;
    
    // Backtrack to find the LCS
    string lcs = "";
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            // If characters match, include them in LCS
            lcs = lcs + s1[i - 1];
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            // Move up if value from above is greater
            i--;
        } else {
            // Move left otherwise
            j--;
        }
    }

    // Reverse the LCS string as we built it backwards
    reverse(lcs.begin(), lcs.end());
    cout << "Longest common subsequence: " << lcs << endl;

}