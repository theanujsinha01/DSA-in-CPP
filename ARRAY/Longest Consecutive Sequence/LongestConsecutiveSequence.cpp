#include <bits/stdc++.h>
using namespace std;

int findLongestConsecutiveSequence(vector<int>arr, int n) {
    
    sort(arr.begin(), arr.end());
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

    return max(longestStreak, currentStreak);
}

int main() {
    vector<int>arr = {11, 12, 2, 1, 3, 10};
    int n = arr.size();
    cout << "Longest Consecutive Sequence Length: " << findLongestConsecutiveSequence(arr, n) << endl;
    return 0;
}

