
#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    string str = "Hello, World!";
    int left = 0;
    int right = str.length() - 1;

    
    while (left < right) {
        
        swap(str[left], str[right]);

        // Move the left pointer to the right
        left++;

        // Move the right pointer to the left
        right--;
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
