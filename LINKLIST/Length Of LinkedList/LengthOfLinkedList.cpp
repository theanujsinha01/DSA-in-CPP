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

int findLength(Node* head) {
    int length = 0;
    Node* temp = head;

    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
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

    int length = findLength(head);
    cout << "Length of the linked list: " << length << endl;
    return 0;
}
