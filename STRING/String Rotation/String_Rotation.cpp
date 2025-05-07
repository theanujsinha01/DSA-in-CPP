#include <bits/stdc++.h>
using namespace std;

bool isRotation(const string &str1, const string &str2) {
    if (str1.length() != str2.length()) return false;
    string str = str1 + str1;
    return str.find(str2) != string::npos;
}

int main() {
    string str1 = "abcd";
    string str2 = "cdab";
    cout << (isRotation(str1, str2) ? "Rotation" : "Not Rotation") << endl;
    return 0;
}
