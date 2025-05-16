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
    for (int i = 1; i < length - k; i++) {
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

// Time Complexity: O(n)
// Space Complexity: O(1)

//...............................................................................
// pseudo code

// Start

// Input: linked list head and number k

// Step 1: Handle empty list or k = 0
// If head is NULL or k is 0:
//     Return head

// Step 2: Count total nodes in the list
// Set temp = head
// Set length = 1
// While temp.next is not NULL:
//     temp = temp.next
//     length = length + 1

// Step 3: Adjust k
// k = k % length
// If k is 0:
//     Return head

// Step 4: Move to (length - k - 1)th node
// Set temp = head
// Repeat (length - k - 1) times:
//     temp = temp.next

// Step 5: Break the list
// newHead = temp.next
// temp.next = NULL

// Step 6: Go to the end of newHead list
// Set last = newHead
// While last.next is not NULL:
//     last = last.next

// Step 7: Attach old head at the end
// last.next = head

// Return newHead

// End
//...............................................................................