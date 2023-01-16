#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
Node*r;
int max=0;
int maxsum=0;
    void s(Node*root,int l,int sum){
        if(root==NULL){
            
        }else{
        sum=sum+(root->data);
         s(root->left,l+1,sum);
         s(root->right,l+1,sum);
        
        if(max<l){
            max=l;
            maxsum=sum;
            
            
        }
        else if(max==l){
            max=l;
            if(maxsum<sum){
                maxsum=sum;
            }
        }
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        maxsum=0;
         s(root,1,0);
         return maxsum;
    }
};