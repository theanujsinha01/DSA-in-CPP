#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Stack elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
