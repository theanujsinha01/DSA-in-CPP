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
Node* getIntersectionNode(Node* head1, Node* head2) {
    if(head1 == NULL or head2 == NULL) return NULL;
        
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    
    while(ptr1 != ptr2){
        if(ptr1 == NULL) ptr1 = head2;
        else ptr1 = ptr1->next;
        
        if(ptr2 == NULL) ptr2 = head1;
        else ptr2 = ptr2->next;
    }
    return ptr1;
}
void printList(Node* node){
    while(node != NULL){
        cout<<node->data<<" -> ";
        node = node->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* headA = new Node(10);
    headA->next = new Node(20);
    headA->next->next = new Node(30);
    headA->next->next->next = new Node(40);
    headA->next->next->next->next = new Node(50);
    Node* headB = new Node(5);
    headB->next = headA->next;
    printList(headA);
    printList(headB);
    Node* intersectionNode = getIntersectionNode(headA, headB);
    if(intersectionNode != NULL){
        cout<<"Intersection Node: "<<intersectionNode->data<<endl;
    }else{
        cout<<"No Intersection Node"<<endl;
    }
    return 0;   
}