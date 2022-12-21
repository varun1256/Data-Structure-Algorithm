#include<bits/stdc++.h>
using namespace std;
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node*temp1=head1;
    Node*head3=NULL;
    Node*temp3;
    map<int,int> mp;
    while(temp1!=NULL){
        int val=temp1->data;
        mp[val]++;
        //cout<<mp[val];
        temp1=temp1->next;
    }
    
    Node* temp2=head2;
    map<int,int> kp;
    while(temp2!=NULL){
        int val=temp2->data;
        kp[val]++;
        temp2=temp2->next;
    }
    
    map<int,int>:: iterator it=mp.begin();
    while(it!=mp.end()){
        
        if(kp[it->first]){
            int count=0;
            if(kp[it->first]>mp[it->first]){
                count=mp[it->first];
            }
            else if(kp[it->first]<mp[it->first]){
                count=kp[it->first];
            }
            else if(kp[it->first]==mp[it->first]){
                count=kp[it->first];
            }
            
            
            for(int i=0;i<count;i++){
                Node* newNode=new Node(it->first);
                if(head3==NULL){
                    head3=newNode;
                    temp3=head3;
                }
                else{
                    temp3->next=newNode;
                    temp3=temp3->next;
                }
                
            }
            
            
        }
        it++;
    
        
        
        
    }
    return head3;
    
}