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
    //Function to remove a loop in the linked list.

    //High Time Complexity
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes

        
        Node* slow=head;
        Node* fast=head;
        Node* temp;
        int loop=0;
        int flag=0;
        
        while(slow!=NULL&&fast->next!=NULL&&fast!=NULL&&loop==0){
            slow=slow->next;
             fast=fast->next->next;
             if(slow==fast){
                 temp=slow;
                  loop=1;
             }
        }
        slow= head;
        if(loop==1){
            
            while(flag==0){
            while(fast->next!=temp){
                
                if(fast->next==slow){
                    fast->next=NULL;
                    flag=1;
                    break;
                }
                fast=fast->next;
            }
            if(flag==0){
            slow=slow->next;
            fast=fast->next;
            }
            }
    
            
            
               
        }
    }

    //Low Time Complexity

};

//Perfect Code
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
         int loop=0;
         Node* temp=head;
         Node* old;
          unordered_map<Node*,int> mp;
          while(temp!=NULL){
              mp[temp]++;
              if(mp[temp]>1){
                  loop=1;
                  old->next=NULL;
                  break;
              }
              old=temp;
              temp=temp->next;
         }
         
         
         
          
               
       
    }
};