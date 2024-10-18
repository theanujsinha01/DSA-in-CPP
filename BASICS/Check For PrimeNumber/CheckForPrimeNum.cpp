#include<bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; 
    bool flage = true; // Prime number hai

    for (int i = 2; i<=number; i++) {
        if (number % i == 0) {
            cout << number << " is not a prime number.\n";
            flage = false;
            break;
        }
        if(flage == true) {
            cout << number << " is a prime number.\n";
            flage = true;
            break;
        }
    }
    return 0; 
}