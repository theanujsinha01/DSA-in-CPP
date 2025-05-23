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
        Node* temp1 = list1;
        Node* temp2 = list2;
        vector<int> ans;

        // Store values from first list
        while (temp1) {
            ans.push_back(temp1->data);
            temp1 = temp1->next;
        }
        
        // Store values from second list
        while (temp2) {
            ans.push_back(temp2->data);
            temp2 = temp2->next;
        }

        // Sort the merged values
        sort(ans.begin(), ans.end());

        // Create a new sorted linked list
        Node* dummy = new Node(0);
        Node* temp = dummy;

        for (int i = 0; i < ans.size(); i++) {
            temp->next = new Node(ans[i]);
            temp = temp->next;
        }

        return dummy->next; 
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
// time complexity: O(nlogn)
// space complexity: O(n)
/*................................................................................
Start

Create empty vector ans

Traverse list1:
    Add each node's data to ans

Traverse list2:
    Add each node's data to ans

Sort ans

Create dummy node
Set temp = dummy

For each value in ans:
    Create new node with value
    temp.next = new node
    temp = temp.next

Return dummy.next

End
...............................................................................*/