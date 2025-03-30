#include <bits/stdc++.h>
using namespace std;

int countTotalBits(int number) {
   
    if (number == 0) return 1;

    int count = 0;
    while (number > 0) {
        number =  number >> 1; // Right shift the number
        count++;      // Increment the count
    }
    return count; // Return the count of bits
}

int main() {
    int number = 15; // Example number
    int bitCount = countTotalBits(number);
    
    cout << "Total number of bits required to represent " << number << " is: " << bitCount << endl;
    return 0;
}
