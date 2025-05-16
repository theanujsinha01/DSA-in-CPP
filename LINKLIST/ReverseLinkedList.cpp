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
    stack<int> stk;

    // Store the elements of the linked list in a vector
    Node* temp = head;
    while (temp != NULL) {
        stk.push(temp->data);
        temp = temp->next;
    }

    // Reverse the linked list by setting the node values from the vector
    temp = head;

    while (temp != NULL) {
        temp->data = stk.top();
        stk.pop();
        temp = temp->next;
    }

    return head;
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

// time complexity: O(n)
// space complexity: O(n) for the stack

//...........................................................................

// Pseudo code to reverse linked list using stack

// Start

// Input: head of linked list

// Create an empty stack

// temp = head

// While temp is not NULL:
//    Push temp.data to stack
//    temp = temp.next

// temp = head

// While temp is not NULL:
//    temp.data = pop value from stack
//    temp = temp.next

// Return head

// End
 //............................................................................
