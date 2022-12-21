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
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node* temp=head;
     Node*old;
     unordered_map<int,int> mp;
     while(temp!=NULL){
         int val=temp->data;
         mp[val]++;
         if(mp[val]>1){
             old->next=temp->next;
             temp->next=NULL;
             temp=old->next;
         }
         else{
         old=temp;
         temp=temp->next;
         }
         
     }
  
   
   return head;
    }
};