#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>v;
     queue<Node*>save;
     stack<int>s;
     save.push(root);
     
     while(save.size()!=0){
         
         Node*f=save.front();
         s.push(f->data);
        
         save.pop();
         
         if(f->right!=NULL){
         save.push(f->right);
         }
         if(f->left!=NULL){
         save.push(f->left);
         }
         
     }
     while(s.size()!=0){
         v.push_back(s.top());
         s.pop();
     }
     
   
    return v;
  
    
}