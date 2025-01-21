#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Create a 2D array for storing the number of unique paths
    int dp[m+1][n+1];
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
             if(i==0 or j==0){
                dp[i][j]=0;
             }
             else if(i==1 and j==1){
                dp[i][j]=1;
             }
             else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
             }
        }
    }
    
    // Output the result, which is the number of unique paths to reach the bottom-right corner
    cout << "Number of unique paths: ";
    cout << dp[m][n] << endl;

    return 0;
}
