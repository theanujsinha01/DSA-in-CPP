#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1, 2, 3, 4, 5};

    // Push front and push back
    dq.push_front(0); 
    dq.push_back(6);  
    cout << "Deque after push_front(0) and push_back(6): ";
    for (int num : dq) cout << num << " ";
    cout << endl;

    // Pop front and pop back
    dq.pop_front();
    dq.pop_back();
    cout << "Deque after pop_front() and pop_back(): ";
    for (int num : dq) cout << num << " ";
    cout << endl;

    // Access front and back
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    return 0;
}
