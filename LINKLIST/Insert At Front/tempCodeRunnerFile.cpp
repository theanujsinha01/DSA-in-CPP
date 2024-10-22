#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtBeginning(Node*& head, int newData) {
    // Allocate memory for a new node
    Node* addNode = new Node(newData);
    
    // Make next of the new node as the current head
    addNode->next = head;
    
    // Move the head to point to the new node
    head = addNode;
}

// Function to print the Linked List
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL; // Start with an empty list

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    cout << "Linked List: ";
    printList(head);

    return 0;
}
