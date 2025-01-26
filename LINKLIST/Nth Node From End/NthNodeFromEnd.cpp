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

// Function to find the Nth node from the end using vector
Node* findNthFromEndUsingVector(Node* head, int k) {
    vector<Node*> nodes;

    // Traverse the linked list and store the nodes in the vector
    Node* current = head;
    while (current != NULL) {
        nodes.push_back(current);
        current = current->next;
    }

    // Check if n is valid
    if (k > nodes.size() || k <= 0) {
        return NULL; // N is greater than the number of nodes in the list or invalid
    }

    // Return the Nth node from the end
    return nodes[nodes.size() - k];
}

int main() {
    // Creating a linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int n = 4; // Position from the end
    Node* nthNode = findNthFromEndUsingVector(head, n);

    if (nthNode != NULL) {
        cout << "The " << n << "th node from the end is: " << nthNode->data << endl;
    } else {
        cout << "The linked list is shorter than " << n << " nodes." << endl;
    }

    return 0;
}
