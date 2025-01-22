#include <iostream>
using namespace std;

// Function to count the number of set bits in an integer
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1); // Remove the rightmost set bit
        count++;         // Increment count for each set bit
    }
    return count;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int result = countSetBits(num);
    
    cout << "The number of set bits in " << num << " is: " << result << endl;

    return 0;
}
