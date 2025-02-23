#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   //outer loop r1 to rn
   for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   return 0;
}