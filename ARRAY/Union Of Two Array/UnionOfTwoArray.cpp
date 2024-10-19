#include <bits/stdc++.h>
using namespace std;

void findUnion(int arr1[], int n1, int arr2[], int n2) {
    set<int> unionSet;

    // Insert all elements of arr1 into the set
    for (int i = 0; i < n1; i++) {
        unionSet.insert(arr1[i]);
    }

    // Insert all elements of arr2 into the set
    for (int i = 0; i < n2; i++) {
        unionSet.insert(arr2[i]);
    }

    // Print union
    cout << "Union: ";
    for (auto it : unionSet) {
        cout << it << " ";
    }
    cout << endl;
}
int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    findUnion(arr1, n1, arr2, n2);
    return 0;
}
