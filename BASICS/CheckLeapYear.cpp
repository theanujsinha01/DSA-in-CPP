#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {

    if (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)) {
        return true;
        
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
