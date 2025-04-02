#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

struct Node {
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
      
        int val1 = 0, val2 = 0; 
        if(num1){
            val1 = num1->data;
            num1 = num1->next;
        } 
        if(num2){
            val2 = num2->data;
            num2 = num2->next;
        }    
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        
        temp->next = new Node(sum % 10);
        temp = temp->next;

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
// Time Complexity: O(max(m, n)), where m and n are the lengths of the two linked lists. The algorithm traverses both lists once to reverse them and then again to add the numbers, leading to a linear time complexity relative to the length of the longer list.
// Space Complexity: O(max(m, n)), where m and n are the lengths of the two linked lists. The algorithm uses a stack to store the digits of the first list, which requires space proportional to the length of that list. Additionally, a new linked list is created to store the result, which also requires space proportional to the length of the longer input list.
