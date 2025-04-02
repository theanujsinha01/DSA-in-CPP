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

void removeDuplicates(Node* head) {
    
    set<int> seen; // To store unique values
    Node* temp = head;
    while (temp != NULL) {
        seen.insert(temp->data); 
        temp = temp->next; 
    }
    temp = head;
    for(auto it : seen) {
        temp->data = it; // Assign unique values back to the list
        temp = temp->next;
    }
    if (temp != NULL) temp->next = NULL;
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
    head->next->next = new Node(20);
    head->next->next->next = new Node(40);

    printList(head);
    removeDuplicates(head);
    printList(head); 
    return 0; 
}
