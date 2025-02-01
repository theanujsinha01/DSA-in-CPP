#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string &str, string &result, int index) {
    
    if (index == str.size()) {
        cout << result << endl;
        return;
    }

    result.push_back(str[index]);
    printSubsequences(str, result, index + 1);

    result.pop_back();
    printSubsequences(str, result, index + 1);
}

int main() {
    string str = "abc";  
    string result = "";  
    printSubsequences(str, result, 0); 
    return 0;
}
