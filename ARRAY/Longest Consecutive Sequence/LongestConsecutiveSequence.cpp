#include <bits/stdc++.h>
using namespace std;

int findLongestConsecutiveSequence(int arr[], int n) {
    

    sort(arr, arr + n);
    int longestStreak = 1, currentStreak = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentStreak++;
        } 
        else{
            currentStreak = 1;
        }
        longestStreak = max(longestStreak, currentStreak); 
    }

    return max(longestStreak, currentStreak);  // In case the longest streak ends at the last element
}

int main() {
    int arr[] = {11, 12, 2, 1, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Longest Consecutive Sequence Length: " << findLongestConsecutiveSequence(arr, n) << endl;
    return 0;
}

