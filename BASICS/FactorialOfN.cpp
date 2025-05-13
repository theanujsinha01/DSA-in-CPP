#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    cout << "factorial of " << n << " : is " << ans << endl;
    return 0;
}