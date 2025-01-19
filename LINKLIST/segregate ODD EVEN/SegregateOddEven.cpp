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

void segregateEvenOdd(Node*& head) {
    if (head == NULL) return;

    vector<int> values;
    Node* current = head;

    // Store all node values in the vector
    while (current != NULL) {
        values.push_back(current->data);
        current = current->next;
    }

    // Rearrange the vector to have even numbers first, then odd numbers
    int i = 0, j = values.size() - 1;

    // Use two pointers to separate even and odd numbers in the vector
    while (i < j) {
        if (values[i] % 2 == 0) {
            i++; // Move i to the right if it's already even
        } else {
            swap(values[i], values[j]); // Swap odd at i with even at j
            j--; // Move j to the left
        }
    }

    // Rebuild the linked list with the values from the vector
    current = head;
    for (int val : values) {
        current->data = val;
        current = current->next;
    }
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
