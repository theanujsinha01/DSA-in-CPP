#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans = 0;
    while(n != 0){
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n = n/ 10;
    }
    cout<<"Reversed number: "<<ans<<endl;
    return 0;

}