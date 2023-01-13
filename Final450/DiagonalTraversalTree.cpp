#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

queue<Node *> save;
void diag(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        if (root->left != NULL)
        {
            save.push(root->left);
        }
        diag(root->right);
    }
}
void diagonalPrint(Node *root)
{
    cout << "Diagonal Traversal of a TREE is: ";
    save.push(root);
    while (save.size() != 0)
    {
        Node *face = save.front();
        cout << face->data << " ";
        save.pop();
        if (face->left != NULL)
        {
            save.push(face->left);
        }

        diag(face->right);
    }
}

Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int main()
{
    Node *root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    diagonalPrint(root);

    return 0;
}