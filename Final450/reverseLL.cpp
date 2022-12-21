#include<iostream>
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

class LinkedList{
    public:
    Node*head=NULL;
    Node*temp=NULL;
    push(int d){
        Node*newNode=new Node(d);
        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    }
    print(){
        temp=head;
       while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
       }
    }
    rev(){
      Node*start=head;
      Node*p=NULL;
      Node*c=start;
       Node*n=start->next;
       while(c!=NULL){
       c->next=p;
       p=c;
       c=n;
       if(n!=NULL){
       n=n->next;
       }
       }
       head=p;
    }

};
int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout << "Given linked list\n";
    ll.print();

    ll.rev();

    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}