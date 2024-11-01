#include <bits/stdc++.h>
using namespace std;

// Structure to represent an item with weight and value.
struct Item {
    int value;
    int weight;
};

// Comparator function to sort items based on value per weight.
bool comp(Item i1, Item i2) {
    double unit1 = (i1.value * 1.0) / (i1.weight);
    double unit2 = (i2.value * 1.0) / (i2.weight);
    return unit1 > unit2;
}

double fractionalKnapsack(int W, Item arr[], int n) {
    // Sort items based on value per weight.
    sort(arr, arr + n, comp);

    double ans = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i].weight >= W) {
            // If the current item weight is more than available capacity,
            // take the fractional part of this item.
            double unit = (arr[i].value) / (arr[i].weight);
            ans += (W * unit);
            break;
        }

        // If the current item can be fully added, add its value.
        ans += arr[i].value;
        W -= arr[i].weight;  // Reduce remaining capacity.
    }

    return ans;
}

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    Item arr[n];

    // Taking input for each item's value and weight.
    for (int i = 0; i < n; i++) {
        cout << "Enter value and weight for item " << i + 1 << ": ";
        cin >> arr[i].value >> arr[i].weight;
    }

    // Taking input for knapsack capacity.
    cout << "Enter knapsack capacity: ";
    cin >> W;

    double maxValue = fractionalKnapsack(W, arr, n);

    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}
