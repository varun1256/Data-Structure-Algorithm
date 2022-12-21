
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	struct Node* next;
};

Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}

void printList(Node* head)
{
	while (head != NULL) {
		cout << head->key << " ";
		head = head->next;
	}
	cout << endl;
}
Node* detectAndRemoveLoop(Node* head)
{
      int loop=0;
         Node* temp=head;
         Node* old;
          unordered_map<Node*,int> mp;
          while(temp!=NULL){
              mp[temp]++;
              if(mp[temp]>1){
                  loop=1;
                  old->next=NULL;
                  return temp;
              }
              old=temp;
              temp=temp->next;
         }

}

/* Driver program to test above function*/
int main()
{
	Node* head = newNode(50);
	head->next = newNode(20);
	head->next->next = newNode(15);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(10);

	/* Create a loop for testing */
	head->next->next->next->next->next = head->next->next;

	Node* res = detectAndRemoveLoop(head);
	if (res == NULL)
		cout << "Loop does not exist";
	else
		cout << "Loop starting node is " << res->key;
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
