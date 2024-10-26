#include <iostream>
using namespace std;

// Function to find the only non-repeating element in the array
int findNonRepeatingElement(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i];  // XOR all the elements
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findNonRepeatingElement(arr, n);
    
    cout << "The only non-repeating element is: " << result << endl;

    return 0;
}
