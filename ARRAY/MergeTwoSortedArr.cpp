#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int>& v1, vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> mergedarr;  

    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (v1[i] <= v2[j]) {
            mergedarr.push_back(v1[i++]);
        } else {
            mergedarr.push_back(v2[j++]);
        }
    }
    while (i < n1) {
        mergedarr.push_back(v1[i++]);
    }
    while (j < n2) {
        mergedarr.push_back(v2[j++]);
    }
    return mergedarr;
}

int main() {
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6, 8};

    vector<int> ans = mergeArrays(v1, v2);
    cout << "Merged array: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
// Time Complexity: O(n1 + n2), where n1 and n2 are the sizes of the two arrays.
// Space Complexity: O(n1 + n2), where n1 and n2 are the sizes of the two arrays.


/*--------------------------------------------------------------------------------
Start

Input: two sorted arrays v1, v2

Function mergeArrays:
    Set n1 = size of v1
    Set n2 = size of v2
    Create empty array mergedarr
    Set i = 0, j = 0

    While i < n1 and j < n2:
        If v1[i] <= v2[j]:
            Add v1[i] to mergedarr
            i = i + 1
        Else:
            Add v2[j] to mergedarr
            j = j + 1

    While i < n1:
        Add v1[i] to mergedarr
        i = i + 1

    While j < n2:
        Add v2[j] to mergedarr
        j = j + 1

    Return mergedarr

In main:
    Call mergeArrays(v1, v2)
    Print ans
End
--------------------------------------------------------------------------------*/
