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

void removeLoopUtil(Node* loopNode, Node* head) {
   
    while(head->next != loopNode->next){
        head = head->next;
        loopNode = loopNode->next;
    }
    loopNode->next = NULL;
}

void removeLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { // Loop detected
            removeLoopUtil(slow, head);
            
        }
    }
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a linked list with a loop
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next; // Create a loop (4 -> 2)

    removeLoop(head); // Remove the loop

    cout << "Linked list after removing the loop: ";
    printList(head); // Print the updated list

    return 0;
}

// time complexity: O(n)
// space complexity: O(1)
//................................................................................
// pseudo code

// Pseudo code to remove loop in linked list

// Start

// Input: head of linked list

// slow = head
// fast = head

// While fast is not NULL and fast.next is not NULL:
//    slow = slow.next
//    fast = fast.next.next

//    If slow == fast:   // Loop found
//       Call removeLoopUtil(slow, head)
//       Return

// Function removeLoopUtil(loopNode, head):

// While head.next != loopNode.next:
//    head = head.next
//    loopNode = loopNode.next

// loopNode.next = NULL  // Break the loop

// End
//...............................................................................
