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
struct node*Insertnode(struct node*r,int val)
{
    if(r==NULL)
    {
        return Createnode(val);
    }
    else if(r->data>val)
    {
        r->left=Insertnode(r->left,val);
    }
    else{
        r->right=Insertnode(r->right,val);
    }
}
/*
void Insert(node*root,int key)
{
    node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            return;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node*n=Createnode(key);
    if(key<prev->data)
    {
        prev->left=n;
    }
    else{
        prev->right=n;
    }
}*/

int main(){
    struct node*root=NULL;
        root=Insertnode(root,5);
        root=Insertnode(root,3);
        root=Insertnode(root,6);
        root=Insertnode(root,1);        
        root=Insertnode(root,4);
        root=Insertnode(root,7);
        cout<<root->right->right->data;
        
        

return 0;
}