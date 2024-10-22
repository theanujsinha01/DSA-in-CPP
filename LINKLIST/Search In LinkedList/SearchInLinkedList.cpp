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

bool searchElement(Node* head, int target) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == target) {
            return true; // Element found
        }
        temp = temp->next;
    }
    return false; // Element not found
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

    cout << "Linked List: ";
    printList(head);

    // Search for an element
    int target = 90;
    if (searchElement(head, target)) {
        cout << target << " is found in the linked list." << endl;
    } else {
        cout << target << " is not found in the linked list." << endl;
    }

    return 0;
}
