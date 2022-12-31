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
        r->right=Insertnode(r->right,val);
    }
    else{
        r->left=Insertnode(r->left,val);
    }
}

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
}

int main(){
    struct node*root=NULL;
        root=Insertnode(root,10);
        root=Insertnode(root,44);
        root=Insertnode(root,8);
        root=Insertnode(root,55);        
        root=Insertnode(root,60);
        root=Insertnode(root,7);
        root=Insertnode(root,5);
        Insert(root,53);
        cout<<root->right->right;
        

return 0;
}