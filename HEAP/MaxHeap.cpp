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

void deleteKey(vector<int>& v) {
    if (v.empty()) return;
    int n = v.size();
    swap(v[0], v[n - 1]);
    v.pop_back();
    heapify(v, n - 1, 0);

}

int main() {
    vector<int> heap;
    insertKey(heap, 20);
    insertKey(heap, 5);
    insertKey(heap, 15);

    cout << "Heap after inserts: ";
    for (int x : heap) cout << x << " ";
    cout << "\n";

    deleteKey(heap);
    cout << "Heap after delete: ";
    for (int x : heap) cout << x << " ";
    cout << "\n";
    return 0;
}

// Time Complexity: O(log n) for insert and extractMax
// Space Complexity: O(n) for the heap array

/*.............................................................................
Start

heapify(v, n, i):
    Find largest among i, left child, right child
    If largest is not i:
        Swap v[i] and v[largest]
        heapify(v, n, largest)

insertKey(v, key):
    Add key at end
    While key > parent:
        Swap with parent
        Move up

deleteMax(v):
    Swap root with last
    Remove last
    heapify from root

End
................................................................................*/
