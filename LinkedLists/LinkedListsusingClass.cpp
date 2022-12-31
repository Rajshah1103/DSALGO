#include<iostream>
using namespace std;

class node{
    
    public:
        int data;
        node*next;
        node*createnode();
        void display();
        void accept();
        node*insertatfirst();
}*head;
node *node :: createnode()
{
    node*newnode = new(node);
    cout<<"Enter the data for linked List"<<endl;
    cin>>newnode->data;
    newnode->next = NULL;
    return newnode;
}

void node :: accept()
{
    int n=0;
    cout<<"How many nodes you want for Linked List"<<endl;
    cin>>n;
    node*temp;
    head = NULL;
    for(int i=0;i<n;i++)
    {
        node*newnode = createnode();
        if(head ==NULL){
            head=newnode;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    
    }
}

node *node :: insertatfirst()
{
    node*newnode = createnode();
    newnode->next = head;
    head = newnode;
    return head;
}
void node :: display()
{
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    node obj;
    //obj.createnode();
    obj.accept();
    obj.display();
    obj.insertatfirst();
    obj.display();

return 0;
}