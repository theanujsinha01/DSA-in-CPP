#include <bits/stdc++.h>
using namespace std;

    int minOperation(int n)
    {
        
        int count = 0;
        while(n>0){
            if(n%2 == 0){
            n = n/2;
            count++;
            }
            else{
            n = n-1;
            count++;
            }
        }
        return count;
       
    }

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = minOperation(n);
   
    cout << "Min Operation to Reach  "<<n<<"  : "<<ans;
 
}
