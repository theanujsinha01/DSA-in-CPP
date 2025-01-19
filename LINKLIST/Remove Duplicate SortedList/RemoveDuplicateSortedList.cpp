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

void removeDuplicates(Node* head) {
    Node* current = head; // Start with the head of the list

    while (current != NULL && current->next != NULL) {
       
        if (current->data == current->next->data) {
            Node* temp = current->next; // Store the next node(duplicate)
            current->next = current->next->next; // Skip the next node(duplicate)
            delete temp;
        } else {
            current = current->next; 
        }
    }
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
