#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[left]; // Choosing the first element as pivot
    int i = left;
    int j = right;
    while(i<j){
        while(arr[i]<=pivot && i<right){
            i++;
        }
        while(arr[j]>pivot && j>left){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[left],arr[j]);
    return j;

}
 
void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right); // Partitioning index
        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5  ;

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    quickSort(arr, 0, n - 1); 

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
