#include<iostream>
using namespace std;

struct tree{
    int data;
    struct tree*left;
    struct tree*right;
};

struct tree*CreateNode(int data){
    struct tree*n=new(struct tree);
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}

struct tree*InsertNode(struct tree*p,int val){
    if(p==NULL){
        return CreateNode(val);
    }
    else if(p->data>val){
        p->left=InsertNode(p->left,val);
    }
    else{
        p->right=InsertNode(p->right,val);
    }
}
struct tree*Search(struct tree*n,int key){
    if(n==NULL){
        return NULL;
    }
    else if(n->data==key){
        return n;
    }
    else if(n->data>key){
        return Search(n->left,key);
    }
    else{
        return Search(n->right,key);
    }
}

int main(){
     struct tree*node=NULL;
        node=InsertNode(node,10);
        node=InsertNode(node,44);
        node=InsertNode(node,8);
        node=InsertNode(node,55);        
        node=InsertNode(node,60);
        node=InsertNode(node,7);
        node=InsertNode(node,5);
        node=Search(node,60);
        if(node!=NULL)
        {
            cout<<"Element found"<<" "<<node->data<<endl;
        }
        else{
            cout<<"elemnet not found"<<endl;
        }

return 0;
}