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


//.............................................................................
// Pseudocode for dynamic queue with vector

// Start

// Initialize empty list queue

// Function enqueue(value):
//   Add value to the end of queue
//   Print "value added to the queue"

// Function dequeue():
//   If queue is empty:
//     Print "Queue is empty!"
//   Else:
//     Print first element removed from queue
//     Remove first element from queue

// Function display():
//   If queue is empty:
//     Print "Queue is empty!"
//   Else:
//     Print all elements of queue

// In main:
//   enqueue(10)
//   enqueue(20)
//   enqueue(30)
//   display()
//   dequeue()
//   display()
//   enqueue(40)
//   display()

// End
//.............................................................................
