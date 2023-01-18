#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *temp = NULL;
vector<Node *> b;
void Anc(Node *root, int node, vector<Node *> v)
{
    if (root != NULL)
    {

        if (root->data == node)
        {
            for (int i = (v.size() - 1); i >= 0; i--)
            {
                b.push_back(v[i]);
            }
        }
        else
        {
            v.push_back(root);
            Anc(root->left, node, v);
            Anc(root->right, node, v);
        }
    }
}

Node *kthAncestorDFS(Node *root, int node, int &k)
{
    vector<Node *> v;
    b.clear();
    Anc(root, node, v);
    if (b.size() < k)
    {
        cout << " Size is greater";
        return NULL;
    }
    else
    {

        cout << "Kth Ancestor is:" << b[k - 1]->data;
        return NULL;
    }
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);

    int k = 1;
    int node = 6;

    Node *parent = kthAncestorDFS(root, node, k);

    if (parent)
        cout << "-1";

    return 0;
}
