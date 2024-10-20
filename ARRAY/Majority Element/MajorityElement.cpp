#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    int count = 0;
    int element = 0;

    // Find the element that might be the majority
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            element = arr[i];
        }
        if (arr[i] == element) {
            count++;  // Increase count if it's the same element
        } else {
            count--;  // Decrease count if it's a different element
        }
    }

    // Check if the found element is the majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    if (count > n / 2) {
        return element;
    }

    return -1; // No majority element
}

int main() {
    int arr[] = {2, 1, 2, 1, 2, 2,2, 10,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMajorityElement(arr, n);

    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found" << endl;
    }

    return 0;
}
