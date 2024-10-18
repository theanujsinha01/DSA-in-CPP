#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int start =1;
   //outer loop i->1 to i->n
   for(int i=1; i<=n; i++){   //row = i, col = j
        if(i%2 == 0) start = 0;
        else start =1;
       
        // inner loop for print 1 or 0  j->1 to j->i
       for(int j=1; j<=i; j++){
           cout<<start<<" ";
           start = 1-start;
       }

       cout<<endl;
   }
   return 0;
}