#include<bits/stdc++.h>
using namespace std;

int printFibonacci(int n) {
   if (n <= 1) {
       return n;
   }
    return printFibonacci(n - 1) + printFibonacci(n - 2);
}

int main() {
    int n = 10; // Number of terms
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << printFibonacci(i) << " ";
    }
    return 0;
}