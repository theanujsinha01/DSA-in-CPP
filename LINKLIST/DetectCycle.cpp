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

bool detectCycle(Node* head) {
    if (head == NULL) return false; // If the list is empty, no cycle

    Node* slow = head; // Slow pointer
    Node* fast = head; // Fast pointer

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;         // Move slow pointer one step
        fast = fast->next->next;  // Move fast pointer two steps

        // If slow and fast meet, there is a cycle
        if (slow == fast) {
            return true;
        }
    }

    return false; // No cycle detected
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
  
    head->next->next->next->next = head->next; // 40 points to 20

    // Check for cycle
    if (detectCycle(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0; 
}
// Time complexity: O(n), where n is the number of nodes in the linked list.
// Space complexity: O(1), as we are using only two pointers (slow and fast) regardless of the size of the linked list.

/*................................................................................
Start

If head is NULL:
    Return false

Set slow = head
Set fast = head

While fast and fast.next are not NULL:
    Move slow by 1 step
    Move fast by 2 steps
    If slow == fast:
        Return true

Return false
End
................................................................................*/
