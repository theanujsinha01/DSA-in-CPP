#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int>& nums) {

    int count = 0, candidate = -1;

    // Step 1: Find candidate
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Check if candidate is actually majority
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    if (count > nums.size() / 2)
        return candidate;
    else
        return -1; // No majority element

}

int main() {
    vector<int> arr = {2, 3, 3, 2, 3, 3, 7};
    int result = findMajorityElement(arr);

    if (result != -1)
        cout << "Majority element is: " << result;
    else
        cout << "No majority element found";

    return 0;
}
