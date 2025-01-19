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

Node* reverseList(Node* head) {
    vector<int> ans;

    // Store the elements of the linked list in a vector
    Node* temp = head;
    while (temp != NULL) {
        ans.push_back(temp->data);
        temp = temp->next;
    }

    // Reverse the linked list by setting the node values from the vector
    temp = head;
    int i = ans.size() - 1;
    while (temp != NULL) {
        temp->data = ans[i];
        i--;
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
    // Creating a linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list using the array method
    head = reverseList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}

