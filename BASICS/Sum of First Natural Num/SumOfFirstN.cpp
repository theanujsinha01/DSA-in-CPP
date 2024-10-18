#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans = 0;
    for(int i=0; i<=n; i++){
          ans = ans+i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<ans<<endl;
    return 0;

}