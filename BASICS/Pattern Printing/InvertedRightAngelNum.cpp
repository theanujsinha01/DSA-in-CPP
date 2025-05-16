#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   //outer loop rn to r1
   for(int i=n; i>=1; i--){   //row = i, col = j
       // inner loop c1 to ri
       for(int j=1; j<=i; j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   return 0;
}