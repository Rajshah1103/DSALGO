#include<iostream>
using namespace std;

struct node{
    int key;
    struct node*left;
    struct node*right;
    int height;
};

int max(int a,int b)
{
    return a>b?a:b;
}

int getheight(struct node*n)
{
    if(n==NULL)
    {
        return 0;
    }
    return n->height;
}

struct node*Createnode(int key)
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->key=key;
    p->left=NULL;
    p->right=NULL;
    p->height=1;
    return p;
}

int getbalancefactor(struct node*n)
{
   if(n==NULL)
   {
    return 0;
   }
   return getheight(n->left)-getheight(n->right);
}

struct node*Rightrotate(struct node*y)
{   
    struct node*x=y->left;
    struct node*T2=x->right;
    x->right=y;
    y->left=T2;

    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;

    return x;

}
struct node*Leftrotate(struct node*x)
{   
    struct node*y=x->right;
    struct node*T2=y->left;
    y->left=x;
    x->right=T2;

    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;

    return y;

}

struct node*Insertnode(struct node*n,int key)
{
    if(n==NULL)
    {
        return Createnode(key);
    }
    else if(n->key>key)
    {
        n->left=Insertnode(n->left,key);
    }
    else{
        n->right=Insertnode(n->right,key);
    }
    return n;
    n->height=1+max(getheight(n->left),getheight(n->right));

    int bf=getbalancefactor(n);

    // left left case
        if(bf>1 && key<n->left->key)
        {
             return Leftrotate(n);
        }
    // Right right case
        if(bf<-1 && key>n->right->key)
        {
             return Rightrotate(n);
        }
    // left right case
        if(bf>1 && key>n->left->key)
        {
            n->left=Rightrotate(n->left);
            return Leftrotate(n);
        }
    // right left case
        if(bf<-1 && key<n->right->key)
        {
            n->right=Leftrotate(n);
            return Rightrotate(n);
        }
        return n;
}
void preorder(struct node*p)
{
    if(p!=NULL)
    {
        cout<<p->key<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}

int main(){
    struct node*root=NULL;
        root=Insertnode(root,1);
        root=Insertnode(root,2);
        root=Insertnode(root,3);
        root=Insertnode(root,4);        
        root=Insertnode(root,5);
        root=Insertnode(root,6);
        preorder(root);

return 0;
}