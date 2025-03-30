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

Node* segregateEvenOdd(Node* head) {
    if (head == NULL || head->next == NULL) return head;
    
    Node *even = NULL, *odd = NULL, *evenTail = NULL, *oddTail = NULL;
    Node* current = head;

    while (current != NULL) {
        if (current->data % 2 == 0) {
            if (even == NULL) {
                even = evenTail = current;
            } else {
                evenTail->next = current;
                evenTail = evenTail->next;
            }
        } else {
            if (odd == NULL) {
                odd = oddTail = current;
            } else {
                oddTail->next = current;
                oddTail = oddTail->next;
            }
        }
        current = current->next;
    }

    if (evenTail != NULL) evenTail->next = odd; // Connect even list to odd list
    if (oddTail != NULL) oddTail->next = NULL; // End the list properly

    return (even != NULL) ? even : odd; // Return the correct head
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    head = segregateEvenOdd(head); // Update head after segregation

    cout << "List after segregating even and odd nodes: ";
    printList(head);

    return 0;
}
// // Time complexity: O(n), where n is the number of nodes in the linked list.
// // Space complexity: O(1), as we are using a constant amount of space for pointers.

// Algorithm: Segregate Even and Odd Nodes in a Linked List
// Input: A linked list with integer values.

// Initialize:

// evenHead and evenTail to store even nodes.

// oddHead and oddTail to store odd nodes.

// Traverse the List:

// If the node's value is even, append it to the even list.

// If the node's value is odd, append it to the odd list.

// Merge Lists:

// Connect the even list's tail to the odd list's head.

// Set the last node's next pointer to NULL.

// Return the new head of the modified list (starting from even nodes).