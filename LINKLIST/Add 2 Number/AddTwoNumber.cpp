#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int val1 = 0, val2 = 0;
        if (l1 != NULL) {
            val1 = l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            val2 = l2->data;
            l2 = l2->next;
        }
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        Node* newNode = new Node(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }
    
    return dummy->next;
}
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node* l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    Node* l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);

    Node* result = addTwoNumbers(l1, l2);
    cout << "Resultant List: ";
    printList(result);

    
    return 0;
}