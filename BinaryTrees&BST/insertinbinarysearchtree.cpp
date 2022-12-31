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
    else if(root->data>val)
    {
        root->left=Insertnode(root->left,val);
    }
    else{
        root->right=Insertnode(root->right,val);
    }
}

int main(){
    struct node*root=NULL;
        root=Insertnode(root,5);
        root=Insertnode(root,3);
        root=Insertnode(root,6);
        root=Insertnode(root,1);        
        root=Insertnode(root,4);
        root=Insertnode(root,7);
        cout<<root->left->right->data;

return 0;
}