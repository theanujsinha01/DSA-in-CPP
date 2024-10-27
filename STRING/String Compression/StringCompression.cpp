#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& str) {
    if (str.size() == 0) return 0; 

        int writeIndex = 0; // Index to write the compressed characters
        char currentChar = str[0]; // Start with the first character
        int count = 1; // Initialize count of the current character

     // Loop through the string starting from the second character
    for (int i = 1; i <= str.size(); i++) {
        if (str[i] == currentChar) {
                count++; 
        } else {
                // Write the current character to the vector
                str[writeIndex++] = currentChar; // Write character

                // If count is more than 1, convert count to string and write it
                if (count > 1) {
                  string countStr = to_string(count);
                  for (char digit : countStr) {
                    str[writeIndex++] = digit; // Write count digits
                  }
                    
                }

                currentChar = str[i]; // Update current character
                count = 1; // Reset count for the new character
        }
    }

    return writeIndex; 

}


int main() {

    vector<char> str = {'a', 'a', 'b', 'b', 'c', 'c','e','e'}; 

    int newLength = compress(str);

   
    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed vector: ";
    for (int i = 0; i < newLength; i++) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
