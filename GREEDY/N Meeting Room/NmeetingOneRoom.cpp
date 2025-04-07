#include <bits/stdc++.h>
using namespace std;

int maxMeetings(vector<int> start, vector<int> end) {
    vector<pair<int, int>> meetings;
    for (int i = 0; i < start.size(); i++) {
        meetings.push_back({end[i], start[i]}); // Store end and start times
    }

    sort(meetings.begin(), meetings.end()); // Sort by end time

    int ans = 1; // At least one meeting can be attended
    int lastEndTime = meetings[0].first; // The end time of the first meeting
    for (int i = 1; i < meetings.size(); i++) {
        if (meetings[i].second > lastEndTime) { // Check if the next meeting starts after the last one ends
            ans++;
            lastEndTime = meetings[i].first; // Update the last end time
        }
    }
    return ans;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9}; // End times of meetings

    int result = maxMeetings(start, end);
    cout << "Maximum number of meetings that can be attended: " << result << endl;
    return 0;
}
// time complexity: O(nlogn) for sorting + O(n) for the loop = O(nlogn)
// space complexity: O(n) for the meetings vector
