#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root  = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in the left "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the data for inserting in the right "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp = q.front();
        q.pop();
        if(temp == NULL){ // a level has been traversed completely
            cout<<endl;
        if(!q.empty()){ //check if any child for the parent is still present after getting null if still queue is not emmpty means child is present
            q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        } 
    }
}

void preOrderTraversal(node*root){
    if(root){
        cout<<root->data<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(node*root){
    if(root){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data;
    }
}

void inOrderTraversal(node*root){
    if(root){
        inOrderTraversal(root->left);
        cout<<root->data;
        inOrderTraversal(root->right);
        
    }
}

int main(){
    node*root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    preOrderTraversal(root);
    inOrderTraversal(root);
    postOrderTraversal(root);

    return 0;
}