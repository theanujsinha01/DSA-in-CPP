#include <bits/stdc++.h>
using namespace std;

void permute(string str, int left, int right) {
    if (left == right) {
        // Base case: when left and right are the same, we've found a permutation
        cout << str << endl;
    } else {
        
        for (int i = left; i <= right; i++) {
            // Swap the current character with the left-most character
            swap(str[left], str[i]);

            // Recursively generate permutations for the rest of the string
            permute(str, left + 1, right);

            // Backtrack (restore original order by swapping back)
            swap(str[left], str[i]);
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "All permutations of the string are:\n";
    permute(input, 0, input.size() - 1);

    return 0;
}
