
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
};

void pairSum(struct Node *head, int x)

{   unordered_map<int,int>mp;
    Node*temp=head;
    while(temp!=NULL){
        int val=temp->data;
        mp[val]=1;
        temp=temp->next;
    }
    temp=head;
	while(temp!=NULL){
        int val=temp->data;
        if(mp[x-val]==1){
                if(val<(x-val)){
        cout<<'('<<val<<','<<x-val<<')';
                }
        }
        temp=temp->next;
	}
}

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node;
	temp->data = data;
	temp->next = temp->prev = NULL;
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

int main()
{
	struct Node *head = NULL;
	insert(&head, 9);
	insert(&head, 6);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);
	int x = 7;

	pairSum(head, x);

	return 0;
}