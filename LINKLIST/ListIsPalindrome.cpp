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


bool isPalindrome(Node* head) {
    stack<int> s;
    Node* temp = head;
    while (temp != NULL) {
        s.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL) {
        int top = s.top();
        s.pop();
        if (temp->data != top) {
            return false;
        }
        temp = temp->next;
    }
    return true;
   
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
    list1->next = new Node(2);
    list1->next->next = new Node(3);
    list1->next->next->next = new Node(2);
    list1->next->next->next->next = new Node(1);

    if (isPalindrome(list1)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
    return 0;
}
// Time complexity: O(n), where n is the number of nodes in the linked list.
// Space complexity: O(n), for the stack used to store the elements of the linked list.

/*..............................................................................
Start

If head is NULL:
    Return true

Create an empty stack

Set temp = head

While temp is not NULL:
    Push temp.data onto stack
    temp = temp.next

Set temp = head

While temp is not NULL:
    Pop value from stack
    If temp.data != popped value:
        Return false
    temp = temp.next

Return true

End
..............................................................................*/