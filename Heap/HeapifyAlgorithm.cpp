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
            int index = size;
            arr[index]=val;
            while(index>1)
            {
                int parent = index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }

            }
        }
        void display(){
            for(int i =1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
        }
};
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = (2*i)+1;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    else if(right<n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(52);
    h.insert(54);
    h.insert(53);
    //h.display();

    int arr[6] = {-1,54,53,55,52,50};
    
    int n=5;

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}