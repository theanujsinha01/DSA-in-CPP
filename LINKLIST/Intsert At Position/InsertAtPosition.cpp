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

void insertAtPosition(Node*& head, int newData, int position) {
    Node* addNode = new Node(newData);

    // If inserting at the head (position 1)
    if (position == 1) {
        addNode->next = head;
        head = addNode;
        return;
    }

    // Traverse to the node just before the given position
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If the position is out of bounds
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    // Insert the new node at the given position
    addNode->next = temp->next;
    temp->next = addNode;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    insertAtPosition(head, 10, 1);
    insertAtPosition(head, 20, 2);
    insertAtPosition(head, 30, 2); // Insert at position 2 (between 10 and 20)
    insertAtPosition(head, 40, 4); 

    cout << "Linked List: ";
    printList(head);

    return 0;
}
