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
    } .

    Node* temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    addNode->next = temp->next;
    temp->next = addNode;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtPosition(head, 10, 1);
    insertAtPosition(head, 20, 2);
    insertAtPosition(head, 30, 3)

    printList(head);
    return 0;
}
