#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*CreateNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}

struct node*InsertNode(struct node*p,int val){
    if(p==NULL)
    {
        return CreateNode(val);
    }
    else if(val<p->data)
    {
        p->left=InsertNode(p->left,val);
    
    }
    else if(val>p->data)
    {
        p->right=InsertNode(p->right,val);
    }
    
}

void postOrderTraversal(struct node*root){
    if(root!=NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data;
    }
}

int main(){
    struct node*root=NULL;
    root=InsertNode(root,4);
    InsertNode(root,1);
    InsertNode(root,5);
    InsertNode(root,6);
    InsertNode(root,2); 
    InsertNode(root,3);
    postOrderTraversal(root);


return 0;
}