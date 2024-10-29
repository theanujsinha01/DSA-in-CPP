#include <iostream>
using namespace std;

string intToRoman(int num) {
    string result = "";

    // Define Roman numerals and their corresponding values
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Build the Roman numeral
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            result += symbols[i]; // Append the Roman numeral
            num -= values[i];     // Decrease the number
        }
    }

    return result;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string roman = intToRoman(num);
    cout << "Roman numeral: " << roman << endl;

    return 0;
}
