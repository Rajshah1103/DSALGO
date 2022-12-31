/*#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[index]>arr[parent])
            {
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void display()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deleteinheap()
    {
        if(size==0)
        {
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size]; // put last element into first index
        size--; // remove last element 
        int i=1;
        // take root node to its correct position
        while(i<size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;
        
        if(leftindex<size && arr[i]<arr[leftindex])
        {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
        }
        else if(rightindex<size && arr[i]<arr[rightindex])
        {
            swap(arr[i],arr[rightindex]);
            i=rightindex;
        }
        else{
                return;
        }
        }
    }
};

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.display();
    h.deleteinheap();
    h.display();
return 0;
}*/

#include<iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;
        heap()
        {
            arr[0]=-1;
            size=0;
        }
        void insert(int val)
        {
            size=size+1;
            int index=size;
            arr[index]=val;

            while(index>1)
            {
                int parent =index/2;
                if(arr[parent]<arr[index])
                {
                    swap(arr[parent],arr[index]);
                    index=parent;
                }
                else{
                    return;
                }
            }
        }
        void display()
        {
            for(int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
        cout<<endl;
        }
        void deleteinheap()
        {
            if(size==0)
            {
                cout<<"Nothing to delete the heap is empty"<<endl;
                return;
            }
            arr[1]=arr[size];
            size--;
            int i=1;
            while(i<size){
                int leftchild = 2*i;
                int rightchild = 2*i+1;
                if(leftchild<size && arr[i]<arr[leftchild]){
                    swap(arr[i],arr[leftchild]);
                    i=leftchild;
                }
                else if(rightchild<size && arr[i]<arr[rightchild]){
                    swap(arr[i],arr[rightchild]);
                    i=rightchild;
                }
                else{
                    return;
                }
            }

        }
};

int main(){
    heap h;
    h.insert(50);
    h.insert(52);
    h.insert(55);
    h.insert(53);
    h.insert(70);
    h.display();
    h.deleteinheap();
    h.display();

return 0;
}