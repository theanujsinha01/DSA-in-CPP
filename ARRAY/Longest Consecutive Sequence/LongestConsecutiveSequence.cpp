#include <bits/stdc++.h>
using namespace std;

int findLongestConsecutiveSequence(int arr[], int n) {
    unordered_set<int> numSet;

    // Insert all elements into the set
    for (int i = 0; i < n; i++) {
        numSet.insert(arr[i]);
    }

    int longestStreak = 0;

    // Check each element if it's the start of a sequence
    for (int i = 0; i < n; i++) {
        // Only start counting if arr[i] is the start of a sequence
        if (numSet.find(arr[i] - 1) == numSet.end()) {
            int currentNum = arr[i];
            int currentStreak = 1;

            // Count the length of the consecutive sequence
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            // Update the longest streak found
            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findLongestConsecutiveSequence(arr, n);
    cout << "Longest Consecutive Sequence Length: " << result << endl;

    return 0;
}
