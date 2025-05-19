
#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}

int main()
{
    string str = "Hello, World!";
    string ans = reverseString(str);
    cout << "Reversed string: " << ans << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(1)
