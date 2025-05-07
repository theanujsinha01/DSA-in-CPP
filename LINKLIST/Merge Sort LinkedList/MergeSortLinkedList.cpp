#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* merge(Node* l1, Node* l2){
    Node* dummy = new Node(0);
    Node* temp = dummy;
    while(l1 != NULL && l2 != NULL){
        if(l1->data < l2->data){
            temp->next = new Node(l1->data);
            l1 = l1->next;
        }else{
            temp->next = new Node(l2->data);
            l2 = l2->next;
        }
        temp = temp->next;
    }
    while(l1 != NULL){
        temp->next = new Node(l1->data);
        l1 = l1->next;
        temp = temp->next;
    }
    while(l2 != NULL){
        temp->next = new Node(l2->data);
        l2 = l2->next;
        temp = temp->next;
    }
    return dummy->next;
}
Node* MergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    Node* left = MergeSort(head);
    Node* right = MergeSort(slow);
    Node* ans =  merge(left, right);
    return ans;
}

void printList(Node* node){
    while(node != NULL){
        cout<<node->data<<" -> ";
        node = node->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(20);
    Node*ans = MergeSort(head);
    printList(ans);
    return 0;
}