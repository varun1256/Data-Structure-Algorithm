
#include <bits/stdc++.h>
using namespace std;


struct Node {
	int key;
	Node *left, *right;
};


Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}


int findLargestSubtreeSumUtil(Node* root, int& ans)
{
	
	if (root == NULL)
		return 0;

	
	int currSum = root->key +
	findLargestSubtreeSumUtil(root->left, ans)
	+ findLargestSubtreeSumUtil(root->right, ans);

	
	ans = max(ans, currSum);

	return currSum;
}

int maxi=0;
int findL(Node*root){
  if(root==NULL){
       return 0;
       }
    int l=findL(root->left);
    int r=findL(root->right);
    int sum=l+r+(root->key);
    root->key=sum;
    if(sum>maxi){
        maxi=sum;
    }
    return sum;
}

int findLargestSubtreeSum(Node* root)
{
    findL(root);
   return maxi;
}

// Driver function
int main()
{
	

	Node* root = newNode(1);
	root->left = newNode(-2);
	root->right = newNode(23);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(-6);
	root->right->right = newNode(2);

	cout << findLargestSubtreeSum(root);
	return 0;
}
