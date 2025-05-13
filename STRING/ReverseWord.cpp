#include <bits/stdc++.h>
using namespace std;

string reverseWords( string& str) {
    
    string word;
    stringstream ss(str); 
    vector<string>reversedStr;
    
    while (ss >> word) {
        reversedStr.push_back(word);
    }
    str.clear();
    for(int i = reversedStr.size() - 1 ; i>=0; i--){
        str = str + reversedStr[i] + " ";
    }
    str.pop_back();
    return str; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    string result = reverseWords(str);
    cout << "Reversed string: " << result << endl;

    return 0;
}
// time complexity: O(n)
// space complexity: O(n)
