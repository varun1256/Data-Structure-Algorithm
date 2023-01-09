 #include<bits/stdc++.h>
 using namespace std;
 struct Node{
      int data;
      Node*left;
      Node*right;
 };
 vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>v;
      queue<Node*>save;
      save.push(node);
      
      while(save.size()!=0){
          Node*root=save.front();
          v.push_back(root->data);
          save.pop();
          if(root->left!=NULL){
              save.push(root->left);
          }
          if(root->right!=NULL){
              save.push(root->right);
          }
          
      }
      return v;
    }