#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution{
  public:
    /*You are required to complete this method*/
    unordered_map<Node*,int>mp;
    void assign(Node* root,int l){
        if(root!=NULL){
            if((root->left==NULL) && (root->right==NULL)){
                mp[root]=l;
            }
        
        assign(root->left,l+1);
        assign(root->right,l+1);
        }
    }
    bool check(Node *root)
    {
        //Your code here
        mp.clear();
        assign(root,1);
        int c=0;
        int a;
        unordered_map<Node*,int>::iterator it=mp.begin();
    
        while(it!=mp.end()){
            if(c==0){
              a=it->second;
              c++;
            }
            else{
                if(a!=it->second){
                    return false;
                }
            }
            it++;
        }
        
        return true;
    }
};