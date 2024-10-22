#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void deleteAtPosition(Node*& head, int position) {
    // If the list is empty
    if (head == NULL) {
        cout << "The list is empty, nothing to delete." << endl;
        return;
    }

    // If the position is the head (position 1)
    if (position == 1) {
        Node* temp = head;
        head = head->next; // Move head to the next node
        delete temp;
        return;
    }

    // Traverse to the node just before the given position
    Node* temp = head;
    for (int i = 1; (temp != NULL && i < position - 1);  i++) {
        temp = temp->next;
    }

    // If the position is out of bounds
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    // Node temp->next is the node to be deleted
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next; // Skip the node to be deleted

    // Free the memory of the node to be deleted
    delete nodeToDelete;
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

    deleteAtPosition(head, 2);
    cout << "After deleting at position 3: ";
    printList(head);

    return 0;
}
