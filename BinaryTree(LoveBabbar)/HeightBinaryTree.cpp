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

node*BuildTree(node*root){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1) return NULL;
    cout<<"Enter the data to the left of the binary tree"<<root->data<<endl;
    root->left = BuildTree(root->left);
    cout<<"Enter the data to the right of the binary tree"<<root->data<<endl;
    root->right = BuildTree(root->right);

    return root;
}

int height(node*root){
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);

    int ans  = max(left,right)+1;
    return ans;
}


int main(){
    node*root = NULL;
    root = BuildTree(root);
    int ans = height(root);
    cout<<ans<<endl;
    return 0;
}


/*
    Height of the bianry tree Recursion explained
    2     3
     \
      1    2
     /
    3      1
*/