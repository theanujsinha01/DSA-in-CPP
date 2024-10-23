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

Node* mergeTwoLists(Node* list1, Node* list2) {
    // Create a dummy node to act as the start of the merged list
    Node* dummy = new Node(0);
    Node* tail = dummy; // Pointer to build the merged list

    while (list1 != NULL && list2 != NULL) {
        if (list1->data <= list2->data) {
            tail->next = list1; // Append list1's node to the merged list
            list1 = list1->next; // Move list1 pointer forward
        } else {
            tail->next = list2; // Append list2's node to the merged list
            list2 = list2->next; // Move list2 pointer forward
        }
        tail = tail->next; // Move the tail pointer forward
    }

    // Append the remaining nodes from whichever list is not empty
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    // The merged list starts from the node after dummy
    return dummy->next;
}


void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " "; 
        node = node->next;         
    }
    cout << endl;
}

int main() {
     
    Node* list1 = new Node(10);
    list1->next = new Node(30);
    list1->next->next = new Node(50);

    Node* list2 = new Node(20);
    list2->next = new Node(40);
    list2->next->next = new Node(60);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    Node* mergedList = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0; 
}
