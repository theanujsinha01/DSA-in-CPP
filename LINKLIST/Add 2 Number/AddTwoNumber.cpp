#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) { 
        data = val; 
        next = NULL; 
    }
};

Node* rev(Node* num) {
    stack<int> st;
    Node* temp = num;

    while (temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }
    
    temp = num;
    while (temp != NULL) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return num;
}

Node* addTwoLists(Node* num1, Node* num2) {
    num1 = rev(num1);  // Reverse list 1
    num2 = rev(num2);  // Reverse list 2
  
    Node* dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;

    while (num1 != NULL || num2 != NULL || carry != 0) {
        int val1 = (num1 != NULL) ? num1->data : 0;
        int val2 = (num2 != NULL) ? num2->data : 0;
        
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        
        temp->next = new Node(sum % 10);
        temp = temp->next;
        
        if (num1) num1 = num1->next;
        if (num2) num2 = num2->next;
    }

    return rev(dummy->next); // Reverse final sum list before returning
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node *num2 = new Node(3);
    num2->next = new Node(4);
    num2->next->next = new Node(5);

    Node *num1 = new Node(4);
    num1->next = new Node(5);
    
    Node* result = addTwoLists(num1, num2);
    printList(result); // Expected Output: 4 3 5

    return 0;
}
