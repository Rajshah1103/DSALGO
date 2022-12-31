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

struct node*InsertNode(struct node*p,int val){
    if(p==NULL)
    {
        return Createnode(val);
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

struct node*Search(struct node*root,int key)
{
    if(root==NULL){
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    } 
    else if(root->data>key)
    {
        return Search(root->left,key);
    }
    else{
        return Search(root->right,key);
    }


}

int main(){
        struct node*root=NULL;
        root=InsertNode(root,10);
        root=InsertNode(root,44);
        root=InsertNode(root,8);
        root=InsertNode(root,55);        
        root=InsertNode(root,60);
        root=InsertNode(root,7);
        root=InsertNode(root,5);
        root=Search(root,5);
        if(root!=NULL)
        {
            cout<<"Element found"<<" "<<root->data<<endl;
        }
        else{
            cout<<"elemnet not found"<<endl;
        }

return 0;
}