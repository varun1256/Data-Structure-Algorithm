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

 map<Node*,int>k;
    map<int,int>mp2;
    int h2(struct Node* node,int l){
      
        if(node==NULL){
            return l;
        }
      
            k[node]=l;
      
        int lh=h2(node->left,l-1);
        int rh=h2(node->right,l+1);
      return 1;
        
    }
   
    vector<int>topView(Node *root)
    {
        //Your code here
         mp2.clear();
         k.clear();
         
      int height= h2(root,0);
      
      queue<Node*>save;
      save.push(root);
      
      while(!save.empty()){
          Node*f=save.front();
          save.pop();
           
              if(!mp2[k[f]]){
                  mp2[k[f]]=f->data;
              }
         
          if(f->left!=NULL){
          save.push(f->left);
          }
          if(f->right!=NULL){
          save.push(f->right);
          }
      }
      vector<int>v;
      map<int,int>::iterator it2=mp2.begin();
      while(it2!=mp2.end()){
          v.push_back(it2->second);
          it2++;
      }
   
   return v;
    }
