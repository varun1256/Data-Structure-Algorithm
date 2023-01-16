#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node *next;
};
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node*slow=head;
        Node*fast=head;
        while(slow!=NULL&&fast!=NULL&&fast->next!=NULL){
          
            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast){
                return true;
             }
        }
        return false;
    }
};