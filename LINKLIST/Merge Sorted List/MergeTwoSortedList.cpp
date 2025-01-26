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
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    Node* head = new Node(0);
    Node* temp = head;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data <= list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }
    while(list1 != NULL) {
        temp->next = list1;
        list1 = list1->next;
        temp = temp->next;
    }
    while(list2 != NULL) {
        temp->next = list2;
        list2 = list2->next;
        temp = temp->next;
    }

    return head->next;
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
