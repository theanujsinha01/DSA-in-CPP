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

// Function to remove the loop in the linked list
void removeLoop(Node* head) {
    unordered_set<Node*> visitedNodes; // To track visited nodes
    Node* current = head;  // Pointer to traverse the list
    Node* prev = nullptr;  // To keep track of the previous node

    while (current != nullptr) {
        // If current node is already visited, a loop is found
        if (visitedNodes.count(current)) {
            prev->next = nullptr; // Break the loop
            return;
        }

        // Mark the current node as visited
        visitedNodes.insert(current);
        prev = current;        // Update previous pointer
        current = current->next; // Move to the next node
    }
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a linked list with a loop
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->next->next->next = head->next; // Create a loop (4 -> 2)

    removeLoop(head); // Remove the loop

    cout << "Linked list after removing the loop: ";
    printList(head); // Print the updated list

    return 0;
}