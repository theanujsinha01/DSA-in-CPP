#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    
    return fibonaci(n-2)+fibonaci(n - 1);  // Recursive call
}

int main() {
    int number;
    cout<<"Enter a num : ";
    cin>>number;
    cout << "Fibonaaci of " << number << " is " << fibonaci(number) << endl; 
    return 0;
}