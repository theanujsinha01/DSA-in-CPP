// PROBLEM :
// Find the  Second Smallest Element in an Array


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = -1, secondMax = -1;

    // Loop to find the max and second max elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;  
            max = arr[i];     
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];  
        }
    }

    if (secondMax == -1) {
        cout << "There is no second maximum element." << endl;
    } else {
        cout << "The second maximum element is: " << secondMax << endl;
    }

    return 0;
}
