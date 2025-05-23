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

Node* sortList(Node* head) {
    if (head == NULL) return NULL;

    // Counting occurrences of 0, 1, and 2
    int count0 = 0, count1 = 0, count2 = 0;
    Node* temp = head;

    while (temp) {
        if (temp->data == 0) count0++;
        else if (temp->data == 1) count1++;
        else count2++;
        temp = temp->next;
    }

    // Reassigning the values in the linked list
    temp = head;
    while (count0--) {
        temp->data = 0;
        temp = temp->next;
    }
    while (count1--) {
        temp->data = 1;
        temp = temp->next;
    }
    while (count2--) {
        temp->data = 2;
        temp = temp->next;
    }

    return head;
}
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " "; 
        node = node->next;         
    }
    cout << endl; 
}

int main() {
    
    Node* head = new Node(0);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    cout << "Linked List before removing duplicates: ";
    printList(head);

    sortList(head);

    cout << "Linked List after removing duplicates: ";
    printList(head); 

    return 0; 
}
// Time complexity: O(n), where n is the number of nodes in the linked list.
// Space complexity: O(1), as we are using a constant amount of space for counting.
// ----------------------------------------------------------------------------------
// Start

// Input: linked list with values 0, 1, 2 only
// Initialize count0, count1, count2 = 0
// temp = head

// Traverse the list:
//     If temp.data == 0: count0++
//     Else if temp.data == 1: count1++
//     Else count2++
//     Move temp to next node

// temp = head

// While count0 > 0:
//     temp.data = 0
//     temp = temp.next
//     count0--

// While count1 > 0:
//     temp.data = 1
//     temp = temp.next
//     count1--

// While count2 > 0:
//     temp.data = 2
//     temp = temp.next
//     count2--

// Print sorted linked list

// End
// ----------------------------------------------------------------------------------