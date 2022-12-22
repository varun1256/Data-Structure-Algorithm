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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        queue<int>e;
        queue<int>o;
        Node*temp=head;
        
        while(temp!=NULL){
            if((temp->data)%2==0){
            e.push(temp->data);
            }
            else{
              o.push(temp->data);  
            }
            temp=temp->next;
        }
        
        temp=head;
       
        while(temp!=NULL){
            
            if(e.size()!=0){
                
                int d=e.front();
                temp->data=d;
                e.pop();
                
            }else{
              
              if(o.size()!=0){
                  int f=o.front();
                  temp->data=f;
                  o.pop();
              }

            }
            temp=temp->next;
        }
        
        return head;
    }
    
};