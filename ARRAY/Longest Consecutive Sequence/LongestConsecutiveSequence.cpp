#include <bits/stdc++.h>
using namespace std;

int findLongestConsecutiveSequence(int arr[], int n) {
    unordered_set<int> numSet(arr, arr + n);
    int longestStreak = 0;

    for (int i = 0; i < n; i++) {
        if (!numSet.count(arr[i] - 1)) {
            int currentNum = arr[i], currentStreak = 1;
            while (numSet.count(currentNum + 1)) {
                currentNum++;
                currentStreak++;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}

int main() {
    int arr[] = {100, 4, 2, 1, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Longest Consecutive Sequence Length: " << findLongestConsecutiveSequence(arr, n) << endl;
    return 0;
}
