#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {
    int temp[n];  // Temporary array to store rearranged numbers
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[index++] = arr[i];
        }
    }

    // Copy temp array back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}



int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrange(arr, n);

    cout << "Array after rearranging: ";
    for(auto it : arr){
        cout<<it<<" ";
    }

    return 0;
}
