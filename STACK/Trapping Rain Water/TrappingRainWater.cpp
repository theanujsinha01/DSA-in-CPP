#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;  // Handle empty input

    vector<int> mxLeft(n);   // Vector to store max heights on the left
    vector<int> mxRight(n);  // Vector to store max heights on the right

    // Fill the mxLeft array
    mxLeft[0] = height[0];
    for (int i = 1; i < n; i++) {
        mxLeft[i] = max(mxLeft[i - 1], height[i]);
    }

    // Fill the mxRight array
    mxRight[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        mxRight[i] = max(mxRight[i + 1], height[i]);
    }

    vector<int> water(n); // Initialize the water vector
    for (int i = 0; i < n; i++) {
        water[i] = min(mxLeft[i], mxRight[i]) - height[i]; // Corrected the min calculation
    }

    int Sum = 0; // Variable to store the total trapped water
    for (int i = 0; i < n; i++) {
        Sum += water[i]; 
    }

    return Sum; // Return the total trapped water
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; // Example heights
    int result = trap(height);
    cout << "Trapped Rain Water: " << result << " units" << endl;
    return 0;
}
