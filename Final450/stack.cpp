#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
     this->data=data;
     next=NULL;
     }

};
class Stack{
      private:

        Node*head;
        int Size;

      public:

       Stack(){
       head=NULL;
       Size=0;
       }

       void push(int data){
        Node* newNode=new Node(data);
        Size++;
         if(head==NULL){
            head=newNode;
         }else{
            newNode->next=head;
            head=newNode;
          }
        }

       void pop(){
        if(isEmpty()){
         cout<<'Sorry Stack is empty';

        }
        else{
              Node*save=head;
              head=head->next;
              delete save;
              Size--;
        }
       }

       bool isEmpty(){
          if(Size==0){
            return true;
          }
          return false;
       }

       int top(){
         if(isEmpty()){
            cout<<"Stack is Empty";
         }
         return head->data;
       }

       int SIZE(){
       return Size;
       }
};
int main(){
 Stack s;
 s.push(10);
 s.push(20);
 s.push(30);

 cout<<s.top()<<'\n';
 s.pop();
 cout<<s.SIZE()<<'\n';
 cout<<s.isEmpty()<<'\n';
 cout<<s.top()<<'\n';
 s.pop();
 cout<<s.top()<<'\n';

}
