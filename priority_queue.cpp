#include<iostream>
#include<queue>
using namespace std;
int main()
{
    cout<<"Using Priority Queue"<<endl;
    //max_heap
   // priority_queue<int>pq;
    // pq.push(4);
    // pq.push(2);
    // pq.push(5);
    // pq.push(3);
    // cout<<"Element at Top "<<pq.top()<<endl;//5 4 3 2
    // pq.pop();//used to remove top element of queue
    // if(pq.empty()){
    //     cout<<"pq is empty"<<endl;
    // }
    // else{
    //     cout<<"pq is not empty"<<endl;
    // }
    //minheap
    priority_queue<int,vector<int>,greater<int> >minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
cout<<"Element at Top "<<minheap.top()<<endl;//2 3 4 5
    minheap.pop();//used to remove top element of queue
    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap is not empty"<<endl;
    }
    return 0;
}