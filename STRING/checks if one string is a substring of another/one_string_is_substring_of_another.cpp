#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string str1, string str2) {
    if(str1.find(str2) != string::npos){
        return true;
    }
    return false;
}

int main() {
    string str1 = "program";
    string str2 = "gram";
    if (isSubstring(str1, str2)) cout << "Substring found" << endl;
    else cout << "Substring not found" << endl;
    return 0;
}
