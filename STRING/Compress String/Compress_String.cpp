#include <bits/stdc++.h>
using namespace std;

string compressString(const string &str) {
    string compressed;
    int count = 1;
    
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed += string(1, str[i - 1]) + to_string(count);  // Corrected here
            count = 1;
        }
    }
    compressed += string(1, str.back()) + to_string(count);  // Corrected here
    return compressed;
}

int main() {
    string str = "aabbbcccc";
    cout << "Compressed String: " << compressString(str) << endl;
    return 0;
}
