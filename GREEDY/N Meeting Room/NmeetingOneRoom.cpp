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
    int n;
    cout << "Enter the number of meetings: ";
    cin >> n;

    vector<int> start(n), end(n);
    cout << "Enter the start times: ";
    for (int i = 0; i < n; i++) cin >> start[i];

    cout << "Enter the end times: ";
    for (int i = 0; i < n; i++) cin >> end[i];

    int result = maxMeetings(start, end);
    cout << "Maximum number of meetings that can be attended: " << result << endl;

    return 0;
}
