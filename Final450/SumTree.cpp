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
    bool g=true;
    int s(Node*root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
    
        int l=s(root->left);
        int r=s(root->right);
        if((l+r)!=(root->data)){
            g=false;
        }
        root->data=(root->data)+l+r;
        
        return root->data;
        
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         
         int k=s(root);
         return g;
         
    }
};