#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void deleteMiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return;
    }
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    delete slow;
}
void printList(Node* node){
    while(node != NULL){
        cout<<node->data<<" -> ";
        node = node->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printList(head);
    deleteMiddle(head);
    printList(head);
    return 0;   
}
// // Time complexity: O(n), where n is the number of nodes in the linked list.
// // Space complexity: O(1), as we are using a constant amount of space for pointers.

// Algorithm: Delete Middle Node of a Linked List (8 Lines)
// Input head of the linked list. If head is NULL or has only one node, return.

// Initialize slow = head, fast = head, and prev = NULL.

// While fast and fast->next are not NULL:

// Move prev = slow, slow = slow->next, fast = fast->next->next.

// Set prev->next = slow->next, delete slow (middle node).

// Print the linked list.

// End.