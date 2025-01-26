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

void insertAtBeginning(Node*& head, int newData) {
  
    Node* addNode = new Node(newData);
    if (head == NULL) {
        head = addNode;
        return;
    }
    if (head->next == NULL) {
        addNode->next = head;
        head = addNode;
        return;
    }
    
    addNode->next = head;
    head = addNode;
}

// Function to print the Linked List
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL; // Start with an empty list

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    cout << "Linked List: ";
    printList(head);

    return 0;
}
