
#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	int data;
	Node* next;
};


void push(Node** head_ref, int data)
{
	
	Node* ptr1 = new Node();
	ptr1->data = data;
	ptr1->next = *head_ref;

	
	if (*head_ref != NULL)
	{
		
		Node* temp = *head_ref;
		while (temp->next != *head_ref)
			temp = temp->next;
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; 

	*head_ref = ptr1;
}


void printList(Node* head)
{
	Node* temp = head;
	if (head != NULL) {
		do {
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != head);
	}

	cout << endl;
}


void deleteNode(Node** head, int key)
{
    Node*head1=*head;
    Node*temp=(*head)->next;
    Node*old=*head;

      while(head1!=temp){
            if((temp->data)==key){

                old->next=temp->next;
                temp->next=NULL;
                temp=old->next;

                break;

            }else{
                old=temp;
        temp=temp->next;
            }

            if((temp->next)==head1){
                if((head1->data)==key){
                    old->next=temp->next;
                    temp->next=NULL;
                    temp=old->next;
                    head1=old->next;
                }
            }
      }



}


int main()
{
	
	Node* head = NULL;

	
	push(&head, 2);
	push(&head, 5);
	push(&head, 7);
	push(&head, 8);
	push(&head, 10);

	cout << "List Before Deletion: ";
	printList(head);

	deleteNode(&head, 2);

	cout << "List After Deletion: ";
	printList(head);

	return 0;
}


