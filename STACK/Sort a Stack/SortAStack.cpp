#include <bits/stdc++.h>
using namespace std;

void sortStack(stack<int>& s) {

    vector<int> temp;
    while (s.size() > 0) {
        temp.push_back(s.top());
        s.pop();
    }
    sort(temp.begin(), temp.end(), greater<int>()); // Sort in descending order
    for (int i = temp.size() - 1; i >= 0; i--) {
        s.push(temp[i]);
    }
}

void printStack(stack<int> s) {
    while (s.size()>0) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(3);

    cout << "Original Stack: ";
    printStack(s);
    sortStack(s);
    cout << "Sorted Stack: ";
    printStack(s);
    return 0;
}
// Time Complexity: O(n log n) - Sorting the vector takes O(n log n) time
// Space Complexity: O(n) - Using a vector to store the elements of the stack
