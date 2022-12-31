#include<iostream>
#include<queue>
using namespace std;

int main(){
    cout<<"using Priority Queue"<<endl;
    priority_queue<int>pq;
    pq.push(4);
    pq.push(5);
    pq.push(2);
    pq.push(3);
    cout<<"Element at top is"<<" "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at the top is "<<" "<<pq.top();
    // now for min heap
    priority_queue<int,vector<int>,greater<int> >minheap;
    minheap.push(9);
    minheap.push(7);
    minheap.push(4);
    minheap.push(3);
    cout<<"The element at top is"<<" "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"the size of the heap is "<<minheap.size();

return 0;
}