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

Node* addTwoNumbers(Node* list1, Node* list2) {
    Node* dummy = new Node(0);  // Dummy node to simplify result list creation
    Node* current = dummy;
    int carry = 0;

    while (list1 != NULL || list2 != NULL || carry != 0) {
        int sum = carry;
        
        if (list1 != NULL) {
            sum += list1->data;
            list1 = list1->next;
        }

        if (list2 != NULL) {
            sum += list2->data;
            list2 = list2->next;
        }

        carry = sum / 10;
        current->next = new Node(sum % 10);  // Add the least significant digit to result
        current = current->next;
    }

    return dummy->next;  // Return the next node of dummy as the head of the result list
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
     
        
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(2);  // 231

    Node* list2 = new Node(3);
    list2->next = new Node(7);
    list2->next->next = new Node(4); // 473
   

    cout << "First number: ";
    printList(list1);

    cout << "Second number: ";
    printList(list2);

    // Adding the two numbers
    Node* result = addTwoNumbers(list1, list2);  //704

    cout << "Resultant number after adding: ";
    printList(result);

    return 0;
}
