/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
// this node library for the singly linked list
#include "Node.h" 
#include "print.h"
using namespace std; 

void printLinkedList(Node *head){
    if(head == NULL) return; 
    Node *p = head; 
    do{
        cout << p-> data <<" "; 
        p = p->next; 
    }while(p!= head); 

}

void printLinked(Node *head){
    if(head == NULL) return; 
    cout << head->data <<" "; 
    for(Node *p = head->next; p != head; p = p->next){
        cout << p->data<<" "; 
    }
}

int main(){
    Node *head = new Node(1); 
    head ->next = new Node(2); 
    head->next->next = new Node(3); 
    head->next->next->next = head; 
    // printLinkedList(head); 
    printLinked(head); 
    return 0; 
}