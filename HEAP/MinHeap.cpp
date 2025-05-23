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


void deleteKey(vector<int>& v) {
    if (v.empty()) return;
    int n = v.size();
    swap(v[0], v[n - 1]);
    v.pop_back();
    heapify(v, n - 1, 0);
}

int main() {
    vector<int> heap;
    insertKey(heap, 10);
    insertKey(heap, 2);
    insertKey(heap, 30);
   

    cout << "Heap after inserts: ";
    for (int x : heap) cout << x << " ";
    cout << endl;

    deleteKey(heap);
    cout << "Heap after delete: ";
    for (int x : heap) cout << x << " ";
    cout << endl;
    return 0;
}

// Time Complexity: O(log n) for insert and extractMin
// Space Complexity: O(n) for the heap array

/*..............................................................................
Start

heapify(v, n, i):
    Find smallest among i, left child, right child
    If smallest is not i:
        Swap v[i] and v[smallest]
        heapify(v, n, smallest)

insertKey(v, key):
    Add key at end
    While key < parent:
        Swap with parent
        Move up

deleteMin(v):
    Swap root with last
    Remove last
    heapify from root

End
...............................................................................*/
