#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
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
