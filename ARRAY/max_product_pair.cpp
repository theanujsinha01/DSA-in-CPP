#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    int n = arr.size();

    int prod1 = arr[n - 1] * arr[n - 2]; // Product of two largest numbers
    int prod2 = arr[0] * arr[1]; // Product of two smallest

    return max(prod1, prod2);
}

int main() {
    vector<int>arr = {-10, -3, 5, 6, -2};
    int result = maxProduct(arr);
    cout << "Maximum product of two numbers is: " << result << endl;
    return 0;
}
