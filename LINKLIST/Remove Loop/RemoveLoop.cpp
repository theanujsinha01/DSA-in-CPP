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

void removeLoop(Node* loopStart, Node* head) {
    Node* ptr1 = loopStart;
    Node* ptr2 = loopStart;

    while (ptr2 != ptr1) {
        ptr2 = ptr2->next;
    }
    ptr2->next = NULL; 
}

bool detectAndRemoveLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Remove the loop
            removeLoop(slow, head);
            return true; 
        }
    }
    return false; 
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
     
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->next->next->next = head->next; // 4 -> 2 (creates a loop)

    if (detectAndRemoveLoop(head)) {
        cout << "Loop found and removed." << endl;
    } else {
        cout << "No loop found." << endl;
    }

    cout << "Linked List after removing loop: ";
    printList(head);

    return 0;
}
