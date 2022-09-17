#include<iostream>
using namespace std;

class Node{
 public:
  int data;
  Node* next;
  Node(int data){
      this->data=data;
      this->next=NULL;
  }
  ~Node(){
      int value=this->data;
      if(this->next!=NULL){
          delete next;
          next=NULL;
      }cout<<"memory is free for node with data "<<value<<endl;
  }
};
Node* detect(Node* head){
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    if (curr->next==NULL){
        cout<<"Not a cycle"<<endl;
    }
}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
}

int main(){
   

}