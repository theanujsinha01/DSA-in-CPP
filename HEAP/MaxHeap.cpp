#include <bits/stdc++.h>
using namespace std;

// Fix down from i in a max‑heap
void heapify(vector<int>& v, int n, int i) {
    int largest = i, l = 2*i + 1, r = 2*i + 2;
    if (l < n && v[l] > v[largest]) largest = l;
    if (r < n && v[r] > v[largest]) largest = r;
    if (largest != i) {
        swap(v[i], v[largest]);
        heapify(v, n, largest);
    }
}

// Insert new key
void insertKey(vector<int>& v, int key) {
    int i = v.size();
    v.push_back(key);
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (v[parent] >= v[i]) break;
        swap(v[parent], v[i]);
        i = parent;
    }
}

// Remove and return max
int extractMax(vector<int>& v) {
    if (v.empty()) return -1;
    int mx = v.front();
    v[0] = v.back();
    v.pop_back();
    if (!v.empty())
        heapify(v, v.size(), 0);
    return mx;
}

int main() {
    vector<int> heap;
    insertKey(heap, 20);
    insertKey(heap, 5);
    insertKey(heap, 15);
    insertKey(heap, 22);
    insertKey(heap, 9);

    cout << "Heap after inserts: ";
    for (int x : heap) cout << x << " ";
    cout << "\n";

    int mx = extractMax(heap);
    cout << "Extracted max: " << mx << "\n";

    cout << "Heap now: ";
    for (int x : heap) cout << x << " ";
    cout << "\n";
    return 0;
}

// Time Complexity: O(log n) for insert and extractMax
// Space Complexity: O(n) for the heap array