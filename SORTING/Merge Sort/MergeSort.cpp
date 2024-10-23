#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int right) {
   
     int mid = left + (right - left) / 2; 
     int n1 = mid-left+1;
     int n2 = right-mid;

     vector<int>first(n1);
     vector<int>second(n2);

    int mainIdx = left;
    for(int i=0; i<n1; i++){
        first[i] = arr[mainIdx++]; // copy element into first
    }
    
    mainIdx = mid+1;
    for(int i=0; i<n2; i++){
        second[i] = arr[mainIdx++]; // copy element into second 
    }

    int Idx1 = 0;  // index for first half array
    int Idx2 = 0; // index for second half array
    mainIdx = left;

    while(Idx1 < n1 && Idx2 < n2){ // merge the first and second
        if(first[Idx1]<second[Idx2]){
            arr[mainIdx++] = first[Idx1++];
        }
        else{
           arr[mainIdx++] = second[Idx2++]; 
        }
    }

    while(Idx1<n1){
      arr[mainIdx++] = first[Idx1++];
    }
    while(Idx2<n2){
       arr[mainIdx++] = second[Idx2++]; 
    }
  
  
}


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; 

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, right);
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    int n = 8;

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    mergeSort(arr, 0, n - 1); 

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
