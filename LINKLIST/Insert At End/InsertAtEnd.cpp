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

    Node* addNode = new Node(newData);
    
    // If the list is empty, make the new node the head
    if (head == NULL) {
        head = addNode;
        return;
    }
    
    // Otherwise, traverse the list to find the last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Set the next of the last node to the new node
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


    insertAtEnd(head, 10);
    // insertAtEnd(head, 20);
    // insertAtEnd(head, 30);


    cout << "Linked List: ";
    printList(head);

    return 0;
}
