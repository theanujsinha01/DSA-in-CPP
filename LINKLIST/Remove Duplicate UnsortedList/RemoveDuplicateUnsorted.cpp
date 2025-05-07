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

Node* removeDuplicates(Node* head) {
    if (head == NULL) return NULL; // Handle empty list

    unordered_set<int> seen; // To store unique values
    Node* prev = NULL;
    Node* cur = head;

    while (cur != NULL) {
        if (seen.count(cur->data) == 0) {
            seen.insert(cur->data); // Add value to set
            prev = cur;            // Move prev forward
        } else {
            // Duplicate found, remove it
            prev->next = cur->next;
            delete cur; // Free memory for duplicate node
        }
        cur = prev->next; // Move cur forward
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
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(40);

    cout << "Linked List before removing duplicates: ";
    printList(head);

    removeDuplicates(head);

    cout << "Linked List after removing duplicates: ";
    printList(head); 

    return 0; 
}
