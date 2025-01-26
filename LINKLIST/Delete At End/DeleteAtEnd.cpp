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

void deleteAtEnd(Node*& head) {
    // If the list is empty
    if (head == NULL) {
        cout << "The list is empty, nothing to delete." << endl;
        return;
    }

    // If there is only one node in the list
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    // Traverse to the second last node
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete the last node
    delete temp->next;
    temp->next = NULL;
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

    deleteAtEnd(head);
    cout << "After deleting at end: ";
    printList(head);

    return 0;
}
