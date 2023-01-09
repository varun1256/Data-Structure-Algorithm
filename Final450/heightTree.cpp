 #include<bits/stdc++.h>
 using namespace std;
 struct Node{
    Node*left;
    Node*right;
 };
 int h(struct Node* node,int l){
        if(node==NULL){
            return l-1;
        }
        int lh=h(node->left,l+1);
        int rh=h(node->right,l+1);
        if(lh>rh){
            return lh;
        }else{
            return rh;
        }
        
    }
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
      return  h(node,1);
    }