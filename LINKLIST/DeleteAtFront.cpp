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

void deleteAtFront(Node*& head) {
    // If the list is empty
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        return;
    }
    // Move the head to the next node
    Node* temp = head;
    head = head->next;
    delete temp;
}


void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    printList(head);
    deleteAtFront(head);
    printList(head);
    return 0;
}
