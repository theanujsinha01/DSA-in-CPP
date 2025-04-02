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

void deleteAtPosition(Node*& head, int position) {
    // If the list is empty
    if (head == NULL) return;
   
    if (position == 1) {
        Node* temp = head;
        head = head->next; 
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1;  i++) {
        temp = temp->next;
    }

    // If the position is out of bounds
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next; 
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

    printList(head);
    deleteAtPosition(head, 4);
    printList(head);
    return 0;
}
