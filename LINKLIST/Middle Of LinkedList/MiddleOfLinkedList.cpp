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

Node* findMiddle(Node* head) {
    if (head == NULL) return NULL; // If the list is empty

    Node* slow = head; // Initialize slow pointer
    Node* fast = head; // Initialize fast pointer

    // Traverse the list
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;         // Move slow pointer one step
        fast = fast->next->next;  // Move fast pointer two steps
    }

    return slow; // Slow pointer is now at the middle
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

    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle of the Linked List: " << middle->data << endl;
    }

    return 0; 
}
