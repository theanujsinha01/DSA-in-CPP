#include <iostream>
using namespace std;

class Queue {
    public:
    int front, rear, size;
    int* queue;
    

    Queue(int s) {
        front = rear = -1;
        size = s;
        queue = new int[size];
    }

    // Add an element to the queue
    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue is full\n";
            return;
        }
        if (front == -1) front = 0;  // First insertion
        rear++;
        queue[rear] = value;
        cout << value << " enqueued to the queue\n";
    }

    // Remove an element from the queue
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << queue[front] << " dequeued from the queue\n";
        front++;
    }

    // Get the front element
    int frontElement() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return -1;
        }
        return queue[front];
    }

    // Display the queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); // Queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element is: " << q.frontElement() << endl;

    return 0;
}
