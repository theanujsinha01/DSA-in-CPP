#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    
    return p1.second < p2.second; // Sort by end time in ascending order
}

int maxMeetings(vector<int> start, vector<int> end) {
    vector<pair<int, int>> meetings;
    for (int i = 0; i < start.size(); i++) {
        meetings.push_back({start[i], end[i]});
    }

    sort(meetings.begin(), meetings.end(), comp);

    int ans = 1; // At least one meeting can be attended
    int close = meetings[0].second; // The end time of the first meeting
    for (int i = 1; i < start.size(); i++) {
        if (meetings[i].first > close) { // If the start time is after the last end time
            ans++;
            close = meetings[i].second; // Update the end time to the current meeting's end time
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of meetings: ";
    cin >> n;

    vector<int> start(n);
    vector<int> end(n);

    cout << "Enter the start times: ";
    for (int i = 0; i < n; i++) {
        cin >> start[i];
    }

    cout << "Enter the end times: ";
    for (int i = 0; i < n; i++) {
        cin >> end[i];
    }

    int result = maxMeetings(start, end);
    cout << "Maximum number of meetings that can be attended: " << result << endl;

    return 0;
}
