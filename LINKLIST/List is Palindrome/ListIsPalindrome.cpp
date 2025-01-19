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

// Function to convert the linked list to a vector
vector<int> linkedListToVector(Node* head) {
    vector<int> vec;
    while (head != NULL) {
        vec.push_back(head->data);
        head = head->next;
    }
    return vec;
}

// Function to check if a vector is a palindrome
bool isPalindrome(vector<int>& vec) {
    int left = 0, right = vec.size() - 1;

    while (left < right) {
        if (vec[left] != vec[right]) {
            return false;
        }
        left++;
        right--;
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

    cout << "Original List: ";
    printList(list1);

    // Convert linked list to vector
    vector<int> vec = linkedListToVector(list1);

    // Check if the vector is a palindrome
    if (isPalindrome(vec)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
