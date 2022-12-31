#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createnode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

struct node*insertnode(struct node*ptr,int val){
   if(ptr==NULL)
   {
    return createnode(val);
   }
   else if(val<ptr->data)
   {
    ptr->left=insertnode(ptr->left,val);
   }
    else if(val>ptr->data)
    {
        ptr->right=insertnode(ptr->right,val);
    }

}

void InOrderTraversal(struct node*p){
    if(p!=NULL)
    {
        InOrderTraversal(p->left);
        cout<<p->data;
        InOrderTraversal(p->right);
    }
}

int main(){
    struct node*root=NULL;
    root=insertnode(root,7);
    insertnode(root,5);
    insertnode(root,3);
    insertnode(root,4);
    insertnode(root,8);
    insertnode(root,9); 
    InOrderTraversal(root);
return 0;
}