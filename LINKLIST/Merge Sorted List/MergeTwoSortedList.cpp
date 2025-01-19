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
  
    vector<int> values;

    Node* current = list1;
    while (current != NULL) {
        values.push_back(current->data);
        current = current->next;
    }

    current = list2;
    while (current != NULL) {
        values.push_back(current->data);
        current = current->next;
    }

    sort(values.begin(), values.end());
    if (values.empty()) return NULL;

    Node* mergedHead = new Node(values[0]);  // First node of the merged list
    Node* tail = mergedHead;                  // Pointer to build the merged list

    // Rebuild the list from the sorted vector
    for (int i = 1; i < values.size(); i++) {
        tail->next = new Node(values[i]);
        tail = tail->next;
    }

    // Return the head of the merged list
    return mergedHead;
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
