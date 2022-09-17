#include<iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
public:
  CircularQueue(int n){
    size=n;
    arr=new int[size];
    front=rear=-1;
  }

bool enqueue(int value){
    if((front==0 && rear==size-1)||(rear ==(front-1)%(size-1))){
      cout<<"Queue is full"<<endl;
    }
    //first element to push
    else if(front==-1){
front=rear=0;
arr[rear]=value;
    }//if reached last element
    else if(rear==size-1 && front!=0){
rear=0;
arr[rear]=value;
    }
    else{
      rear++;
    }
          arr[rear]=value;
          return true;
  }
bool dequeue(){
  if(front==-1){
    cout<<"Queue is empty!"<<endl;
  }
  else if(front==rear){
    front=rear=-1;
  }
  else if(front==size-1){
    front=0;
  }else{
front++;
  }
}
};