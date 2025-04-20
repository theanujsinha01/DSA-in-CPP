#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& v, int n, int i) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && v[left] < v[smallest])
        smallest = left;
    if (right < n && v[right] < v[smallest])
        smallest = right;
    if (smallest != i) {
        swap(v[i], v[smallest]);
        heapify(v, n, smallest);
    }
}

// Insert new key
void insertKey(vector<int>& v, int key) {
    int i = v.size();
    v.push_back(key);
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (v[parent] <= v[i]) break;
        swap(v[parent], v[i]);
        i = parent;
    }
}


// Remove and return min
int extractMin(vector<int>& v) {
    if (v.empty()) return -1;
    int mn = v.front();
    v[0] = v.back();
    v.pop_back();
    if (!v.empty())
        heapify(v, v.size(), 0);
    return mn;
}

int main() {
    vector<int> heap;
    insertKey(heap, 10);
    insertKey(heap, 2);
    insertKey(heap, 30);
    insertKey(heap, 4);
    insertKey(heap, 5);

    cout << "Heap after inserts: ";
    for (int x : heap) cout << x << " ";
    cout << endl;

    int mn = extractMin(heap);
    cout << "Extracted min: " << mn << endl;

    cout << "Heap now: ";
    for (int x : heap) cout << x << " ";
    cout << endl;
    return 0;
}

// Time Complexity: O(log n) for insert and extractMin
// Space Complexity: O(n) for the heap array