#include <bits/stdc++.h>
using namespace std;

void printPermutations(string str, int index = 0) {
    if (index == str.size()) {
        cout << str << endl;
        return;
    }

    for (int i = index; i < str.size(); i++) {
        swap(str[index], str[i]);
        printPermutations(str, index + 1);
        swap(str[index], str[i]);  // Backtrack
    }
}

int main() {
    string str = "ABC";
    printPermutations(str);
    return 0;
}

