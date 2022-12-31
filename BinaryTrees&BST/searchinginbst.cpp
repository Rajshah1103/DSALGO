#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*Createnode(int data)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

struct node*Insertnode(struct node*root,int val)
{
    if(root==NULL)
    {
        return Createnode(val);
    }
    else if(val>root->data)
    {
        root->right=Insertnode(root->right,val);
    }
    else{
        root->left=Insertnode(root->left,val);
    }
}

struct node*search(struct node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->data==key)
    {
        return root;
    }
    else if(key>root->data)
    {
        return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }
}

int main(){
    struct node*root=NULL;
    root=Insertnode(root,11);
    root=Insertnode(root,21);
    root=Insertnode(root,31);
    root=Insertnode(root,41);
    root=Insertnode(root,51);
    root=search(root,61);
    if(root!=NULL)
    {
        cout<<"Elemnet found at "<<" "<<root->data<<endl;
    }
    else{
        cout<<"Element not found";
    }
    

return 0;
}