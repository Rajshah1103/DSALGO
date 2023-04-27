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
            this->left= NULL;
            this->right = NULL;
        }
};

node*Buildtree(node*root){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data to the left of the binary tree "<<root->data<<endl;
    root->left  = Buildtree(root->left);
    cout<<"Enter the data to the right of the binary tree "<<root->data<<endl;
    root->right = Buildtree(root->right);

    return root;
}

pair<int,int> diameterFast(node*root){
    if(root==NULL){
        pair<int,int>p = make_pair(0,0);
        return p;
    } 
    pair<int,int>left = diameterFast(root->left);
    pair<int,int>right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second+right.second+1;
    pair<int,int>ans;
    ans.first  = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second)+1;
    return ans;
}


int diameter(node*root){
    return diameterFast(root).first;
}    

int main(){
    node*root = NULL;
    root = Buildtree(root);
    int ans = diameter(root);
    cout<<ans<<endl;
    return 0;
}