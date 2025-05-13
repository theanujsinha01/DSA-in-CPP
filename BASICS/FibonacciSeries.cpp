#include<bits/stdc++.h>
using namespace std;

int printFibonacci(int n) {
   if (n <= 1) {
       return n;
   }
    return printFibonacci(n - 1) + printFibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    cout << printFibonacci(n) << endl;
    return 0;
}