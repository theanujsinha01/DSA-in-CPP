#include<bits/stdc++.h>
using namespace std;

int main(){
   int r, c;
   cin>>r>>c;
   //outer loop r1 to rn
   for(int i=1; i<=r; i++){   //row = i, col = j
       // inner loop c1 to ri
       for(int j=1; j<=i; j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   return 0;
}