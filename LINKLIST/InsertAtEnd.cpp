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

void insertAtEnd(Node*& head, int newData) {

    if (head == NULL) {
        head = new Node(newData);
        return;
   }

    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(newData);
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL; 
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    printList(head);
    return 0;
}
