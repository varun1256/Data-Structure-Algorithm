#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *removeDuplicates(Node *head)
{
 // your code goes here
   
   Node* old=head;
   Node* temp=head->next;
   
   while(temp!=NULL){
       if(old->data==temp->data){
          old->next=temp->next;
          temp->next=NULL;
          temp=old->next;
       }
       else{
       old=temp;
       if(temp!=NULL){
       temp=temp->next;
       }
       }
   }
   
   return head;
}