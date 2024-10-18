#include<bits/stdc++.h>
using namespace std;

int main(){
   int r, c;
   cin>>r>>c;
   //outer loop rn to r1
   for(int i=r; i>=1; i--){   //row = i, col = j
       // inner loop c1 to ri
       for(int j=1; j<=i; j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   return 0;
}