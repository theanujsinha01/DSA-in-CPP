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
int findNthFromEndUsingVector(Node* head, int k) {

    vector<int> nodes;
    Node* current = head;

    while (current != NULL) {
        nodes.push_back(current->data);
        current = current->next;
    }

    if (k > nodes.size() || k <= 0)  return -1; // Invalid position
    return nodes[nodes.size() - k];
}

int main() {
    // Creating a linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int n = 4; // Position from the end
    int ans = findNthFromEndUsingVector(head, n);

    if (ans){
        cout << "The " << n << "th node from the end is: " << ans << endl;
    } else {
        cout << "The linked list is shorter than " << n << " nodes." << endl;
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n) for storing the nodes in a vector

/*...............................................................................
Start

Input: head of linked list, number k

Create empty vector nodes

Set temp = head

While temp is not NULL:
    Add temp.data to nodes
    temp = temp.next

If k > size of nodes or k <= 0:
    Return -1

Return nodes[size of nodes - k]

End
............................................................................*/