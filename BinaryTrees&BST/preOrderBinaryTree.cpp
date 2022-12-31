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

void preOrderTraversal(struct node*root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

int main(){
        struct node*p=Createnode(4);
        struct node*p1=Createnode(1);
        struct node*p2=Createnode(6);        
        struct node*p3=Createnode(5);
        struct node*p4=Createnode(2);
    
        p->left=p1;
        p->right=p2;
        p1->left=p3;
        p1->right=p4;
        preOrderTraversal(p);
return 0;

}