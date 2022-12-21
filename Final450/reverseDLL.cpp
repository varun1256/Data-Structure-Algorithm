#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node*prev;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node* reverseDLL(Node * head)
{
    //Your code here
    Node*temp=head;
     int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    
    }
    Node*n;
    Node*old;
    temp=head  ;
    while(count!=0){
        old=temp;
        n=temp->next;
        temp->next=temp->prev;
        temp->prev=n;
        temp=n;
        count--;
    }
    
    return old;
    
}