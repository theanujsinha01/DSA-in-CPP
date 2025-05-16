#include <bits/stdc++.h>
using namespace std;

// Max-heapify
void heapify(vector<int>& v, int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && v[l] > v[largest]) largest = l;
    if (r < n && v[r] > v[largest]) largest = r;
    if (largest != i) {
        swap(v[i], v[largest]);
        heapify(v, n, largest);
    }
}

// Heap sort
vector<int> heapSort(vector<int>& v) {
    int n = v.size();
    // Build max-heap
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(v, n, i);

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--) {
        swap(v[0], v[i]);       // move max to end
        heapify(v, i, 0);       // heapify reduced heap
    }
    return v;
}

int main() {
    vector<int> arr = {20, 5, 15, 22, 9};
    vector<int>ans = heapSort(arr);
    cout << "Sorted array: ";
    for (auto x : ans) cout << x << " ";
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(1) (in-place sorting)

// ----------------------------------------------------------------------------------
// pseudo code

// FUNCTION heapify(array, size, root):
//     largest = root
//     left = 2 * root + 1
//     right = 2 * root + 2

//     IF left < size AND array[left] > array[largest]:
//         largest = left

//     IF right < size AND array[right] > array[largest]:
//         largest = right

//     IF largest != root:
//         SWAP array[root] and array[largest]
//         heapify(array, size, largest)

// FUNCTION heapSort(array):
//     size = length of array

//     // Build max heap
//     FOR i from (size / 2 - 1) down to 0:
//         heapify(array, size, i)

//     // Extract elements from heap one by one
//     FOR i from (size - 1) down to 1:
//         SWAP array[0] and array[i]
//         heapify(array, i, 0)

// MAIN:
//     array = [list of numbers]
//     heapSort(array)
//     PRINT sorted array
// ----------------------------------------------------------------------------------