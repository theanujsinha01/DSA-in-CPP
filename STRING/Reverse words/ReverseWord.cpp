#include <bits/stdc++.h>
using namespace std;

string reverseWords( string& str) {
    string reversedStr = "";
    string word;
    stringstream ss(str); // Create a string stream from the input string

    // Extract words from the string stream and push them onto the stack
    while (ss >> word) {
         if(reversedStr.size()>0){
            reversedStr = word +" "+ reversedStr;
         }
         else{
            reversedStr = word;
         }
    }
    return reversedStr; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    string result = reverseWords(str);
    cout << "Reversed string: " << result << endl;

    return 0;
}
