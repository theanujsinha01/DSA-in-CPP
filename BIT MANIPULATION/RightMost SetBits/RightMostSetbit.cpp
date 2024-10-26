#include <iostream>
using namespace std;

// Function to get the rightmost set bit
int getRightmostSetBit(int n) {
    return n & -n; // -n two complement
}

int main() {
    int number = 3; // Example input (binary: 10010)
    int rightmostSetBit = getRightmostSetBit(number);
    
    cout << "The rightmost set bit of " << number << " is: " <<"Position : "<< rightmostSetBit << endl;

    return 0;
}
