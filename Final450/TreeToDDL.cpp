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
 

// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    vector<int>v;
     Node*toD(Node*root){
        if(root!=NULL){
            
            toD(root->left);
            v.push_back(root->data);
            toD(root->right);
            
        }
    }
    
    Node * bToDLL(Node *root)
    {
        // your code here
        v.clear();
        toD(root);
        Node*head=NULL;
        Node*p=NULL;
        for(int i=0;i<v.size();i++){
            if(head==NULL){
            Node*n=new Node(v[i]);
            head=n;
            n->left=p;
            p=n;
            }
            else{
                   Node*n=new Node(v[i]);
                   n->left=p;
                   p->right=n;
                   p=n;
            }
        }
        return head;
    }
};