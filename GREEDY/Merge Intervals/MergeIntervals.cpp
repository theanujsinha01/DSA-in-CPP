#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& arr) {
    vector<vector<int>> res;
    if (arr.empty()) return res;

    sort(arr.begin(), arr.end());
    res.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++) {
        int lastEnd = res.back()[1];
        int currStart = arr[i][0];
        int currEnd = arr[i][1];

        if (lastEnd >= currStart) {
            res.back()[1] = max(lastEnd, currEnd); // merge
        } else {
            res.push_back(arr[i]); // no overlap
        }
    }
    return res;
}

int main() {
    vector<vector<int>> arr = {
        {1, 3},
        {2, 6},
        {8, 10}
    };

    vector<vector<int>> ans = mergeIntervals(arr);

    cout << "Merged Intervals:\n";
    for (int i = 0; i < ans.size(); i++)
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "] ";
    cout << endl;
    return 0;
}
// time complexity: O(nlogn) for sorting + O(n) for the loop = O(nlogn)
// space complexity: O(n) for the result vector