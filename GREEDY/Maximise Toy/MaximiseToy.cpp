#include <bits/stdc++.h>
using namespace std;

int toyCount(int N, int K, vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += arr[i];
        if (sum > K) return i;
    }
    return N;
}

int main() {
    int N, K;
    cout << "Enter the number of toys (N) and maximum money (K): ";
    cin >> N >> K;

    vector<int> arr(N);
    cout << "Enter the prices of the toys: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = toyCount(N, K, arr);
    cout << "Maximum toys that can be bought: " << result << endl;

    return 0;
}
