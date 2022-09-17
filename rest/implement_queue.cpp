#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
public:
  Queue(){
    size=100001;
    arr=new int[size];
    qfront=0;
    rear=0;
  }
  bool isEmpty(){
    //Implement the isEmpty() function
    if(qfront==rear){
        return true;
    }
    return false;
  }
  //adds element at end of queue
  void enqueue(int data){
  if(rear==size){
   cout<<"queue is full"<<endl;
  }
  else{
arr[rear]==data;
rear++;
  }
  }
//removes element from start of queue
    void dequeue(){
   if(qfront==rear){
    cout<<"Empty!"<<endl;
   }else{
    arr[qfront]=-1;//-1 denotes empty
    qfront++;
    if(qfront==rear){//so that no array element is wasted
        qfront=0;
        rear=0;
    }
    
   }
  }
  int front(){
      if(qfront==rear){
    cout<<"Empty!"<<endl;
   }else{
    return arr[qfront];
   }
  }
};