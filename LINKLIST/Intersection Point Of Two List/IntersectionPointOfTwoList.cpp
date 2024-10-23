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

// Function to calculate the length of the linked list
int getLength(Node* head) {
    int length = 0;
    while (head != nullptr) {
        length++;
        head = head->next;
    }
    return length;
}

Node* getIntersectionNode(Node* list1, Node* list2) {
    // Step 1: Find the lengths of both lists
    int len1 = getLength(list1);
    int len2 = getLength(list2);

    // Step 2: Align the starting points of both lists
    if (len1 > len2) {
        int diff = len1 - len2;
        for (int i = 0; i < diff; i++) {
            list1 = list1->next;
        }
    } else if (len2 > len1) {
        int diff = len2 - len1;
        for (int i = 0; i < diff; i++) {
            list2 = list2->next;
        }
    }

    // Step 3: Traverse both lists and find the intersection point
    while (list1 != NULL && list2 != NULL) {
        if (list1 == list2) {
            return list1;  // Intersection found
        }
        list1 = list1->next;
        list2 = list2->next;
    }

    return NULL;  // No intersection found
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
   

    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(3);
    list1->next->next->next = new Node(4);
    list1->next->next->next->next = new Node(5);

    Node* list2 = new Node(6);
    list2->next = new Node(4);
    list2->next->next = new Node(5);

    list2->next = list1->next->next->next;  // Intersection at node with value 4

    // Print both lists
    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    // Find and print the intersection point
    Node* intersection = getIntersectionNode(list1, list2);
    if (intersection != NULL) {
        cout << "Intersection point: " << intersection->data << endl;
    } else {
        cout << "No intersection point found." << endl;
    }

    return 0;
}
