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

    Node* even = NULL;
    Node* odd = NULL;
    Node* evenHead = NULL;
    Node* oddHead = NULL;

    Node* current = head;

    while (current != NULL) {
        if (current->data % 2 == 0) {
            // Add to even list
            if (even == NULL) {
                even = current;
                evenHead = even;
            } else {
                even->next = current;
                even = even->next;
            }
        } else {
            // Add to odd list
            if (odd == NULL) {
                odd = current;
                oddHead = odd;
            } else {
                odd->next = current;
                odd = odd->next;
            }
        }
        current = current->next;
    }

    // If there are no even nodes, return the odd list
    if (even == NULL) {
        head = oddHead;
        return;
    }

    // Connect even list to odd list
    even->next = oddHead;
    
    // If there are odd nodes, terminate the list after the last odd node
    if (odd != NULL) {
        odd->next = NULL;
    }

    // Update head to the start of the even list
    head = evenHead;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);


    cout << "Original List: ";
    printList(head);

    segregateEvenOdd(head);

    cout << "List after segregating even and odd nodes: ";
    printList(head);

    return 0;
}
