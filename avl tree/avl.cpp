#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public
    :int val;
    int height;
    node *right;
    node *left;
};

node *newnode(int key)
{
    node *root=new node();
    root->left=NULL;
    root->right=NULL;
    root->val=key;
    root->height=1;
    return root;
}
int height(node *root)
{
    if(root==NULL)return 0;
    return root->height;
}
int balancecheck(node *root)
{
    return (height(root->left)-height(root->right));
}
node *leftrotate(node *a)
{
    node *b=a->right;
    node *temp=b->left;
    b->left=a;
    a->right=temp;
    a->height=max(height(a->left),height(a->right))+1;
    b->height=max(height(b->left),height(b->right))+1;
    return b;
}
node *rightrotate(node *a)
{
    node *b=a->left;
    node *temp=b->right;
    b->right=a;
    a->left=temp;
    a->height=max(height(a->left),height(a->right))+1;
    b->height=max(height(b->left),height(b->right))+1;
    return b;
}
node * insert(node *root,int key)
{
    if(root==NULL)
    {
        root=newnode(key);
        return root;
    }
    if(key<root->val)
    {
        root->left=insert(root->left,key);
    }
    else if(key>root->val)
    {
        root->right=insert(root->right,key);
    }
    else
    {
        return root; //assume bst to have unique elements
    }
    root->height=1+max(height(root->left),height(root->right));

    int bal=balancecheck(root);
    if(bal>1 && key<root->left->val)
    {
        return rightrotate(root);
    }
    if(bal>1 && key>root->left->val)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(bal<-1 && key>root->right->val)
    {
        return leftrotate(root);
    }
    if(bal <-1 && key<root->right->val)
    {
       root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}
void preorder(node *root)
{
    if(root!=NULL)
    {
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
    }
}
int main()
{
    node *root=NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    
    printf("Preorder traversal will be printed \n");
    preorder(root);

    return 0;
}