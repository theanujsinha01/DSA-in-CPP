#include <iostream>
#include <vector>
using namespace std;

vector<int> queue; // dynamic queue

void enqueue(int value) {
    queue.push_back(value);
    cout << value << " added to the queue.\n";
}

void dequeue() {
    if (queue.size()==0) {
        cout << "Queue is empty!\n";
    } else {
        cout << queue.front() << " removed from the queue.\n";
        queue.erase(queue.begin()); // remove first element
    }
}

void display() {
    if (queue.size()==0) {
        cout << "Queue is empty!\n";
    } else {
        cout << "Queue elements: ";
        for (int i = 0; i < queue.size(); i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    display();

    return 0;
}

// Time complexity:
// enqueue → O(1)
// dequeue → O(n) (because of erase from front)
// Space complexity → O(n)
