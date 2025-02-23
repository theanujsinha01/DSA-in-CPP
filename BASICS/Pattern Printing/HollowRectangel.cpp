#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Outer loop for rows (i from 1 to n)
    for(int i = 1; i <= n; i++) {

        // Inner loop for columns (j from 1 to n)
        for(int j = 1; j <= n; j++) {

            // Print '*' for border cells, else print space
            if(i == 1 || j == 1 || i == n || j == n) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
