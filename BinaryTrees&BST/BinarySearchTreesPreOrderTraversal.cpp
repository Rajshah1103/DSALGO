#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*CreateNode(int data){
    struct node*n;  // create a node pointer
    n=(struct node*)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data=data; // setting the data
    n->left=NULL;// setting the left and right children to null
    n->right=NULL;// setting the left and right children to null
    return n; // Finally returning the created node

}

void PreOrder(struct node*root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        PreOrder(root->left);
        PreOrder(root->right);
    }
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


int main(){
    struct node*root=NULL;
    root=InsertNode(root,4);
    InsertNode(root,1);
    InsertNode(root,5);
    InsertNode(root,6);
    InsertNode(root,2); 
    InsertNode(root,3);
    PreOrder(root);   
return 0;
}