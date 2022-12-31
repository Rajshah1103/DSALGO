#include<iostream>
using namespace std;

class node{
    private:
        int data;
        node*next;
    public:
        void display();
        node*createnode();
        void accept();
        node*middle();
        node*reverse(node*head);
        bool palindorme();
}*head;

node *node :: createnode()
{
    node*newnode = new(node);
    cout<<"Enter the Data for the LL"<<endl;
    cin>>newnode->data;
    newnode->next=NULL;
    return newnode;
}

void node :: accept()
{
    node*temp = head;
    int size;
    cout<<"enter the number of nodes you want"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        node*newnode = createnode();
        if(head==NULL)
        {
            head = newnode;
        }
        else{
            node*temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }

    }
}

void node :: display()
{
    node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node *node :: middle()
{
    node*temp = head;
    node*q = head;
    while(q!=NULL && q->next!=NULL)
    {
        temp = temp->next;
        q = q->next->next;
    }
    //cout<<"The middle of linked list is"<<temp->data<<endl;
    return temp;
}

node *node ::reverse(node*head)
{
    node*curr = head;
    node*prev = NULL;
    node*next = head;
    while(next!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head  = prev;
    return prev;
}   

bool  node :: palindorme()
{
    node*mid = middle();
    node*temp = mid->next;
    mid->next = reverse(temp);

    node*head1 = head;
    node*head2 = mid->next;
    while(head2!=NULL)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = mid->next;
    mid->next = reverse(temp);
    return true;


}

int main(){
    node obj;
    obj.accept();
    obj.display();
    // obj.middle();
    head = obj.reverse(head);
    obj.display();
    // cout<<obj.palindorme();
    // cout<<endl;
    // obj.display();

return 0;
}