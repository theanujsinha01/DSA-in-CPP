#include <bits/stdc++.h>
using namespace std;

vector<int>MoveAllZeroEnd(vector<int>& arr) {
    int n = arr.size();
    int index = 0; // place for non-zero elements

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    // Fill remaining with 0
    while (index < nums.size()) {
        nums[index++] = 0;
    }
    return arr;
}
int main() {
   vector<int> arr = {0, 8, 4, 0, 2, 7, 0, 6};
   vector<int>ans =  MoveAllZeroEnd(arr);

    cout << "Array after rearranging: ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
// Time Complexity: O(n), where n is the size of the input array.
// Space Complexity: O(1), as we are rearranging the elements in place without using extra space.

/*-------------------------------------------------------------------------------
Start

Input: array arr

Function MoveAllZeroEnd:
    Set n = size of arr
    Create temp array of size n
    Set index = 0

    For i = 0 to n-1:
        If arr[i] != 0:
            temp[index] = arr[i]
            index = index + 1

    For i = 0 to n-1:
        If arr[i] == 0:
            temp[index] = arr[i]
            index = index + 1

    For i = 0 to n-1:
        arr[i] = temp[i]

    Return arr

In main:
    Call MoveAllZeroEnd(arr)
    Print ans
End
// ----------------------------------------------------------------------------*/
