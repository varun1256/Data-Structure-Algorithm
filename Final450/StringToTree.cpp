
#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	Node *left, *right;
};
Node* newNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

void preOrder(Node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}


string s;
int i=0;
Node*T(Node*root,int ei){
         if(i==ei){
            return root;
         }
         if(s[i]=='('){
                i=i+1;
                int a=s[i];
                 a=a-48;
                Node*n=newNode(a);
                root->left=n;
            }
            else{
                return root;
            }
            i++;

            T(root->left,ei);

            if(s[i]==')'){
                i++;
            }
            if(s[i]=='('){
                i++;
                int a=s[i];
                 a=a-48;
                Node*n=newNode(a);
                root->right=n;
            }
            else{
                return root;
            }
            i++;

            T(root->right,ei);

            if(s[i]==')'){
                i++;
            }

            return root;

}

Node* treeFromString(string str, int si, int ei)
{
    Node*root;

    s=str;
 cout<<"String is Converted into Tree:\t";
    int a=s[0];
     a=a-48;
    root=newNode(a);
    i=1;

    T(root,ei);
    return root;
}

// Driver Code
int main()
{
	string str = "4(2(3)(1))(6(5))";
	Node* root = treeFromString(str, 0, str.length() - 1);
	preOrder(root);
}
