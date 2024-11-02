#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {

    vector<vector<int>> ans;
    if (intervals.size() == 0) return ans;
    
    // Sort intervals based on the starting time
    sort(intervals.begin(), intervals.end());
    
    ans.push_back(intervals[0]);
    int j = 0; // To keep track of the last added interval
    
    // Iterate through the intervals
    for (int i = 1; i < intervals.size(); i++) {
        // If the current interval overlaps with the last added interval
        if (ans[j][1] >= intervals[i][0]) {
            // Merge them by updating the end time
            ans[j][1] = max(ans[j][1], intervals[i][1]);
        } else {
            // No overlap, add the current interval to the answer
            j++;
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    
    cout << "Enter the intervals (start and end): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }
    
    vector<vector<int>> mergedIntervals = mergeIntervals(intervals);
    
    cout << "Merged intervals: " << endl;
    for (auto it : mergedIntervals) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;

    return 0;
}
