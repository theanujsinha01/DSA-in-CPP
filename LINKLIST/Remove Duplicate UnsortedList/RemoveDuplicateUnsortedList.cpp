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

void removeDuplicates(Node*& head) {
    if (head == nullptr) return; 

    unordered_set<int> seen; // Create a hash set to store seen values
    Node* current = head; 
    Node* prev = NULL; 

    while (current != NULL) {
        // If the current node's data is already in the set
        if (seen.find(current->data) != seen.end()) {
            // Skip the current node by linking previous node to the next node
            prev->next = current->next; 
            delete current; // Delete the current node
        } else {
            // If the data is not in the set, add it
            seen.insert(current->data);
            prev = current; // Move the prev pointer to current
        }
        current = current->next;
    }
}


void printList(Node* node) {
    while (node != nullptr) {
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
