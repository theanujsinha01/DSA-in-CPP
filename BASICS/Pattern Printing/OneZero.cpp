#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int one = 1;
   int zero = 0;

   for(int i=1; i<=n; i++){  
        
       for(int j=1; j<=i; j++){
          if((i+j)%2 == 0){
              cout<<one<<" ";
            }else{
              cout<<zero<<" ";
            }  
       }

       cout<<endl;
   }
   return 0;
}