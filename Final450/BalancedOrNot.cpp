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
bool flag;
    int bal(Node* root){
        if(root==NULL){
            return 0;
        }
        int lh=0;
        int rh=0;
        lh=lh+bal(root->left);
        rh=rh+bal(root->right);
        if((lh-rh)>1){
            flag=false;
        }
        if((rh-lh)>1){
            flag=false;
        }
        int k;
        if(lh>rh){
            k=lh+1;
        }else{
            k=rh+1;
            
        }
        return k;
       
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        flag=true;
        int h=bal(root);
        return flag;
    }