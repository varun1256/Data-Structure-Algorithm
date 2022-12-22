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
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        stack<int>one;
        stack<int>two;
        stack<int>zero;
        
        Node* temp=head;
        while(temp!=NULL){
            int val=temp->data;
            if(val==1){
                one.push(val);
            }else if(val==0){
                zero.push(val);
            }
            else{
                two.push(val);
            }
            temp=temp->next;
            
        }
        temp=head;
        
        while(temp!=NULL){
            if(zero.size()!=0){
                int d=zero.top();
                temp->data=d;
                zero.pop();
            }
            else{
                
                if(one.size()!=0){
                    int f=one.top();
                    temp->data=f;
                    one.pop();
                }
                else{
                    if(two.size()!=0){
                        int g=two.top();
                        temp->data=g;
                        two.pop();
                    }
                }
            }
            temp=temp->next;
        }
        return head;
    }
};