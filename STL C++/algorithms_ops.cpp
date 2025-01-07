#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vc = {10, 2, 30, 4, 50};
    sort(vc.begin(), vc.end());
    cout << "Sorted vector: ";
    for (int num : vc) cout << num << " ";
    cout << endl;

   
    cout << "Reversed vector: ";
    vector<int> vt = {10, 20, 30, 40, 50};
    reverse(vt.begin(), vt.end());
    for (int num : vt) cout << num << " ";
    cout << endl;


    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if (binary_search(vec.begin(), vec.end(), 5)) {
        cout << "5 found in the vector." << endl;
    } else {
        cout << "5 not found." << endl;
    }



    int x = 5, y = 10;
    cout << "Max of " << x << " and " << y << " is: " << max(x, y) << endl;
    cout << "Min of " << x << " and " << y << " is: " << min(x, y) << endl;

    int a = 5, b = 10;
    swap(a, b);
    cout << "After swap, a: " << a << ", b: " << b << endl;



    return 0;
}
