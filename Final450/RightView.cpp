#include<bits/stdc++.h>
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
    //Function to return list containing elements of right view of binary tree.
      map<int,int>mp;
    int h(struct Node* node,int l){
      
        if(node==NULL){
            return l-1;
        }
            mp[l]=node->data;
    
      
        int lh=h(node->left,l+1);
        int rh=h(node->right,l+1);
      
        if(lh>rh){
            
            return lh;
        }else{
            return rh;
        }
        
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
        mp.clear();
      int height= h(root,1);
      vector<int>v;
      map<int,int>::iterator it=mp.begin();
      while(it!=mp.end()){
          v.push_back(it->second);
          it++;
      }
   
   return v;
    }
};