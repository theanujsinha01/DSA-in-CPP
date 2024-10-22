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

Node* reverseLinkedList(Node* head) {
    // Base case: 
    if (head == NULL || head->next == NULL) {
        return head; // Return the head if the list is empty or has one node
    }
    
    // Recursive case: reverse the rest of the list
    Node* newHead = reverseLinkedList(head->next);
    
    // Reverse the current node's pointer
    head->next->next = head; // Point the next node's next to the current node
    head->next = NULL;     // Set the current node's next to nullptr

    return newHead; // Return the new head of the reversed list
}


void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {


    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original Linked List: ";
    printList(head);

    head = reverseLinkedList(head);
    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
