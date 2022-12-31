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

void takeInput(struct node*root){
    int data;
    // cin>>data;
    while(data!=-1)
    {
        cin>>data;
        root = Insertnode(root,data);
    }
}

// struct node*inOrderPredecessor(struct node*root)
// {
//     root=root->left;
//     while(root->right!=NULL)
//     {
//         root=root->right;
//     }
//     return root;
// }

struct node*minVal(struct node*root)
{
    node*temp = root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

struct node*deletenode(struct node*root,int key)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data==key)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        if(root->left!=NULL && root->right==NULL)
        {
            node*temp = root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            node*temp = root->right;
            delete root;
            return temp;
        }
        if(root->left!=NULL && root->right!=NULL)
        {
            int min1 = minVal(root->right)->data;
            root->data = min1;
            root->right = deletenode(root->right,min1);
            return root;
        }

    }
    else if(root->data>key)
    {
        root->left = deletenode(root->left,key);
        return root;
    }
    else{
        root->right = deletenode(root->right,key);
        return root;
    }
}

void InOrderTraversal(struct node*p){
    if(p!=NULL)
    {
        InOrderTraversal(p->left);
        cout<<p->data<<" ";
        InOrderTraversal(p->right);
    }
}


int main(){
    struct node*root=NULL;
    cout<<"enter the data to create BST"<<endl;
    takeInput(root);
    cout<<"printing inorder traversal"<<endl;
    InOrderTraversal(root);
    root = deletenode(root,30);
    cout<<"printing inorder traversal"<<endl;
    InOrderTraversal(root);

return 0;
}