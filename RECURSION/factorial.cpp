#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int number;
    cout<<"Enter a num : ";
    cin>>number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;  // Output: 120
    return 0;
}
// time complexity: O(n) because we are making n recursive calls
// space complexity: O(n) because of the recursion stack