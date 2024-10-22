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

Node* findNthFromEnd(Node* head, int n) {
    Node* first = head; 
    Node* second = head; 

    for (int i = 0; i < n; i++) {
        if (first == NULL) {
            return NULL; // If N is greater than the length of the list
        }
        first = first->next;
    }

    // Move both pointers until first reaches the end
    while (first != NULL) {
        first = first->next; 
        second = second->next; 
    }

    return second; // Second pointer is now at the Nth node from the end
}

int main() {
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int n = 4; 
    Node* nthNode = findNthFromEnd(head, n);

    if (nthNode != NULL) {
        cout << "The " << n << "th node from the end is: " << nthNode->data << endl; 
    } else {
        cout << "The linked list is shorter than " << n << " nodes." << endl;
    }

    return 0;
}
