#include <iostream>
using namespace std;

#define SIZE 5 // Size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element to the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue is full!\n";
    } else {
        if (front == -1) front = 0; // Set front to 0 if inserting the first element
        rear++;
        queue[rear] = value;
        cout << value << " added to the queue.\n";
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!\n";
    } else {
        cout << queue[front] << " removed from the queue.\n";
        front++;
    }
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
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
