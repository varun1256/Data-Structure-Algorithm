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

class Queue{
  private:
    Node* Front;
    Node* tail;
    int Size;

    public:

    Queue(){
      Front=NULL;
      tail=NULL;
      Size=0;
    }

    void push(int data){
       Node*newNode=new Node(data);
       Size++;
      if(Front==NULL){
          Front=newNode;
          tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=tail->next;
    }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty";
        }
        else{

      Node*save=Front;
      Front=Front->next;
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

    int FRONT(){
       if(isEmpty()){
        return INT_MIN;
       }
       return Front->data;
    }

    int SIZE(){
       return Size;
    }



};
int main(){
 Queue s;
 s.push(10);
 s.push(20);
 s.push(30);

 cout<<s.FRONT()<<'\n';
 s.pop();
 cout<<s.SIZE()<<'\n';
 cout<<s.isEmpty()<<'\n';
 cout<<s.FRONT()<<'\n';
 s.pop();
 cout<<s.FRONT()<<'\n';

}

