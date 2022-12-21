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
    //Function to check whether the list is palindrome.
   
    bool isPalindrome(Node *head)
    {
        //Your code here
         stack<int> k;
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        
        temp=head;
        if(count%2==0){
            
            int f=count*0.5;
            for(int i=0;i<f;i++){
                k.push(temp->data);
                temp=temp->next;
            }
            while(temp!=NULL){
                if((temp->data)==k.top()){
                    k.pop();
                }else{
                    return 0;
                }
                temp=temp->next;
                
            }
            
        }
        else{
            int f=count*0.5;
              for(int i=0;i<f;i++){
                k.push(temp->data);
                temp=temp->next;
            }
            temp=temp->next;
             while(temp!=NULL){
                if((temp->data)==k.top()){
                    k.pop();
                }else{
                    return 0;
                }
                temp=temp->next;
                
            }
            
            
            
        }
        
        return 1;
    }
};
