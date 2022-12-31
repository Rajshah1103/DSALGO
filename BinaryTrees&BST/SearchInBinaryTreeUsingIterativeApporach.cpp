#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*CreateNode(int data)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

struct node*Insertnode(struct node*p,int val)
{
    if(p==NULL)
    {
        return CreateNode(val);
    }
    else if(val>p->data)
    {
        p->right=Insertnode(p->right,val);
    }
    else{
        p->left=Insertnode(p->left,val);
    }
}

struct node*search(struct node*root,int key)
{
    while(root!=NULL)
    {
        if(root->data==key)
        {
            return root;
        }
        else if(root->data>key)
        {
           root=root->left;

        }
        else{
            root=root->right;
        }
    }
    return NULL;
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
        root=search(root,60);
        if(root!=NULL)
        {
            cout<<"Element found"<<" "<<root->data<<endl;
        }
        else{
            cout<<"elemnet not found"<<endl;
        }
     

return 0;
}