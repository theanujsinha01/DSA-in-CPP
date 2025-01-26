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
Node* getIntersectionNode(Node* headA, Node* headB) {
    if(headA == NULL || headB == NULL){
        return NULL;
    }
    Node* a = headA;
    Node* b = headB;
    while(a != b){
        if(a == NULL){
            a = headB;
        }else{
            a = a->next;
        }
        if(b == NULL){
            b = headA;
        }else{
            b = b->next;
        }

    }
    return a;
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
    headB->next = headA->next->next;
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