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

Node* rotateLinkedList(Node* head) {
    if (head == NULL || head->next == NULL) return head; // 0 or 1 node

    Node* secondLast = head;
    

    // go to last node
    while (secondLast->next->next != NULL) {
        secondLast = secondLast->next;        
    }
    Node* last = secondLast->next;
    last->next = head; 
    secondLast->next = NULL;  
    head = last;             
    return head;
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);
    head = rotateLinkedList(head);
    printList(head);

    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

/*...............................................................................
Start

Node* secondLast = NULL;
Node* last = head;

// go to last node
while (last->next) {
    secondLast = last;
    last = last->next;
}

secondLast->next = NULL; // break link
last->next = head;       // move last to front
head = last;             // update head

return head;

End
...............................................................................*/