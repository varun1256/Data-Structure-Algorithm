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
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    // Node* temp=head1;
    // Node* temp2=head2;
    
    // map<Node*,int> mp;
    // while(temp!=NULL){
    //     mp[temp]++;
    //     temp=temp->next;
    // }

 
    // while(temp2!=NULL){
    //     if(mp[temp2]==1){
    //         return temp2->data;
    //     }
    
    //     temp2=temp2->next;
    // }
    
    // return -1;
    
    Node* temp=head1;
    Node* temp2=head2;
    int a=0;
    int b=0;
    
    while(temp!=NULL){
        a++;
        temp=temp->next;
    }
    
    while(temp2!=NULL){
        b++;
        temp2=temp2->next;
    }
    temp=head1;
    temp2=head2;
    int diff=0;
    if(a<b){
        diff=b-a;
        
        while(diff!=0){
            if(temp2!=NULL){
            temp2=temp2->next;
            }
            diff--;
        }
        
    }
    else if(a>b){
        diff=a-b;
        while(diff!=0){
            if(temp!=NULL){
            temp=temp->next;
            }
            diff--;
        }
    }
    
    while(temp!=NULL||temp2!=NULL){
        if(temp==temp2){
            return temp->data;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    
     return -1;
}