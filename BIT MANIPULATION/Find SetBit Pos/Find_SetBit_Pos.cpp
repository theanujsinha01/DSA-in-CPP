#include<bits/stdc++.h>
using namespace std;

int findSetBitPos(int n) {
    if (n == 0) return 0;
    if((n&(n-1))!=0){ // If n is not a power of 2
          return -1;
    }
    int pos = 1;
    while (n) {
        if (n & 1) break;
        n = n >> 1;
        pos++;
    }
    return pos;
}
int main() {
    int number = 16; // Example input (binary: 1000)
    int position = findSetBitPos(number);
    
    if(position==-1){
        cout<<"Invalid Input"<<endl;
        return 0;
    }else{
        cout << "The rightmost set bit of " << number << " is at position: " << position << endl;
    }

    return 0;
}