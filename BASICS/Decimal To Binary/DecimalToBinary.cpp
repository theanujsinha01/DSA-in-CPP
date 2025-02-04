#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0, ans = 0;
    
    while (n > 0) {
        int lastbit = n & 1;
        ans = ans + (lastbit * pow(10, i)); // Using i directly
        n = n >> 1;
        i++;
    }
    
    cout << "Binary equivalent: " << ans << endl;
    return 0;
}
