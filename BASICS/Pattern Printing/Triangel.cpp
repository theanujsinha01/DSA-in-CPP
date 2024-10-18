#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   //outer loop i->1 to i->n
   for(int i=1; i<=n; i++){   //row = i, col = j
       // inner loop for space j->1 to j->n-i
       for(int j=1; j<=n-i; j++){
           cout<<" ";
       }
        // inner loop for print * j->1 to j->2i-1
       for(int j=1; j<=2*i-1; j++){
           cout<<"*";
       }

       cout<<endl;
   }
   return 0;
}