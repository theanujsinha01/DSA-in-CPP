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
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;     // save next
        curr->next = prev;     // reverse link
        prev = curr;           // move prev
        curr = next;           // move current
    }

    return prev;  // new head
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list using the array method
    head = reverseList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}

// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Space Complexity: O(1), as we are using a constant amount of extra space for pointers.

/*...........................................................................

Start

Set prev = NULL          // Previous node starts as NULL
Set curr = head          // Current node starts at head

While curr is not NULL:  // Traverse the list
    next = curr.next         // Save next node
    curr.next = prev         // Reverse the link
    prev = curr              // Move prev to current node
    curr = next              // Move to next node

Return prev              // prev is the new head

End
............................................................................*/
