#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    vector<Node*>v1;
    vector<Node*>v2;
    vector<Node*>v3;
    vector<Node*>v4;
    Node*l(Node*root,int n1,vector<Node*>v1){
        if(root==NULL){
            return root;
        }
        
        v1.push_back(root);
        
        if(root->data==n1){
            
            for(int i=(v1.size()-1);i>=0;i--){
                v3.push_back(v1[i]);
            }
            return root;
        }
        Node*k=l(root->left,n1,v1);
        Node*b=l(root->right,n1,v1);
        return root;
    }
    
     Node*r(Node*root,int n2,vector<Node*>v2){
        if(root==NULL){
            return root;
        }
        
        v2.push_back(root);
        
        if(root->data==n2){
            
            for(int i=(v2.size()-1);i>=0;i--){
                v4.push_back(v2[i]);
            }
            return root;
        }
        Node*k=r(root->left,n2,v2);
        Node*b=r(root->right,n2,v2);
        return root;
    }
    
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
      v1.clear();
        v2.clear();
         v3.clear();
          v4.clear();
       
        Node*t=l(root,n1,v1);
         Node*p=r(root,n2,v2);
         
        map<Node*,int>mp;
        for(int i=0;i<v3.size();i++){
            mp[v3[i]]++;
        }
          for(int i=0;i<v4.size();i++){
            if(mp[v4[i]]==1){
                return v4[i];
            }
        }
        return root;
    }
};