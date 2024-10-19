#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    // A leap year is divisible by 4, but if divisible by 100, it must also be divisible by 400
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true; // Divisible by 400 -> Leap year
            else
                return false; // Divisible by 100 but not by 400 -> Not a leap year
        } else
            return true; // Divisible by 4 but not by 100 -> Leap year
    }
    return false; 
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    return 0;
}
