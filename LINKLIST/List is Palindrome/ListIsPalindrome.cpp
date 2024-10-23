#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to find the middle of the linked list
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow; 
}

Node* reverseLinkedList(Node* head) {
    // Base case: 
    if (head == NULL || head->next == NULL) {
        return head; 
    }
    
    Node* newHead = reverseLinkedList(head->next);
  
    head->next->next = head; 
    head->next = NULL;    

    return newHead; 
}

bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;  
    }

    // Step 1: Find the middle of the linked list
    Node* middle = findMiddle(head);

    // Step 2: Reverse the second half of the list
    Node* secondHalfStart = reverseLinkedList(middle);

    // Step 3: Compare the first half and the reversed second half
    Node* firstHalf = head;
    Node* secondHalf = secondHalfStart;
    bool palindrome = true;
    
    while (secondHalf != nullptr) {
        if (firstHalf->data != secondHalf->data) {
            palindrome = false;
            break;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    // Step 4 (optional): Restore the second half to its original form
   reverseLinkedList(secondHalfStart);

    return palindrome;
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
    list1->next->next->next = new Node(2);
    list1->next->next->next->next = new Node(1);

    cout << "Original List: ";
    printList(list1);

    if (isPalindrome(list1)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
