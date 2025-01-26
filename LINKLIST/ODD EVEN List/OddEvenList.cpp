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

Node* segregateEvenOdd(Node*& head) {
    if (head == NULL || head->next == NULL) return head;
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;

    while (odd->next != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;

}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    // Segregate even and odd nodes using a single vector
    segregateEvenOdd(head);

    cout << "List after segregating even and odd nodes: ";
    printList(head);

    return 0;
}
