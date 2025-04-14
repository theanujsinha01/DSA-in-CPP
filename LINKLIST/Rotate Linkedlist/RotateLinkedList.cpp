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

// Function to rotate the linked list by k positions
Node* rotateLinkedList(Node* head, int k) {
    if (!head || k == 0) return head;

    // Find the length of the list
    Node* temp = head;
    int length = 1; // Start with 1 since we're already at the head
    while (temp->next) {
        length++;
        temp = temp->next;
    }

    // Make k within the bounds of the list length
    k = k % length;
    if (k == 0) return head;

    // Find the node just before the new head (length - k - 1)
    temp = head;
    for (int i = 1; i < length - k; ++i) {
        temp = temp->next;
    }

    // Make the node after this one the new head
    Node* newHead = temp->next;
    temp->next = NULL; // Break the list here

    // Find the last node and connect it to the original head
    Node* last = newHead;
    while (last->next) {
        last = last->next;
    }
    last->next = head;

    return newHead;
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);

    int k = 2; // Rotate by 2 positions
    head = rotateLinkedList(head, k);

    cout << "Linked List after rotating by " << k << " positions: ";
    printList(head);

    return 0;
}
