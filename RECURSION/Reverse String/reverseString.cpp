#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    // Base case: If the string is empty or has one character, return it.
    if (str.size() == 0 || str.size() == 1)
        return str;
    
    // Recursive case: Reverse the rest of the string and append the first character.
    return reverseString(str.substr(1)) + str[0];
}

int main() {
    string str;
    cout<<"write the something :  ";
    cin>>str;
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
