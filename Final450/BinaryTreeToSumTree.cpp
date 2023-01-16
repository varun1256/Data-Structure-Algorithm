#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int tst(Node*node){
        if(node==NULL){
              return 0;   
                 
             }
        
        int L=tst(node->left);
        int R= tst(node->right);
        
        int k=node->data;
        node->data=L+R;
        return k+L+R;
        
    }
    
    void toSumTree(Node *node)
    {   int k=0;
        int p=tst(node);
        
    }
};