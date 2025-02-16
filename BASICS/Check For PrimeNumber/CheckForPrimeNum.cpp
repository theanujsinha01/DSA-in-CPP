#include<bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; 

    if (number < 2) {
        cout << number << " is not a prime number.\n";
        return 0;
    }
   
    for (int i = 2; i<=sqrt(number); i++) {
        if (number % i == 0) {
            cout << number << " is not a prime number.\n";
            return 0;
        }
        
    }
    cout << number << " is a prime number.\n";
    return 0; 
}