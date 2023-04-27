#include<bits/stdc++.h>
#include<iostream>
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

node*insertIntoBST(node*root,int d){
    if(root==NULL){
        root = new node(d);
        return root;
    }
    if(d>root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;  
    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
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

int main(){
    cout<<"Insert data to create BST"<<endl;
    node*root = NULL;
    takeInput(root);
    levelOrderTraversal(root);
    return 0;

}