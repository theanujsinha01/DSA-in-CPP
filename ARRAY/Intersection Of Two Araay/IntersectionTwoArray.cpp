#include <bits/stdc++.h>
using namespace std;

void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    set<int> intersectionSet;

    // Insert elements of arr1 into the set
    for (int i = 0; i < n1; i++) {
        intersectionSet.insert(arr1[i]);
    }

    // Check if elements of arr2 are present in the set
    cout << "Intersection: ";
    for (int i = 0; i < n2; i++) {
        if (intersectionSet.count(arr2[i])) {
            cout << arr2[i] << " ";
            intersectionSet.erase(arr2[i]); // To avoid duplicates
        }
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

    findIntersection(arr1, n1, arr2, n2);
    return 0;
}
