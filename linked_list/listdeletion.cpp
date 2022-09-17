#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
//constructor
Node(int data){
   this-> data=data;
   this-> next=NULL;
}
//destructor
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node with data"<<value<<endl;
}
};
void insertAtHead(Node* &head,int d){
  //new node create
  Node* temp=new Node(d);
  temp->next=head;
  head=temp;
}
void insertAtTail(Node* &tail,int d){
  //new node create
  Node* temp=new Node(d);
  tail->next=temp;
  tail=tail->next;
}
void print(Node* &head){
     Node* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp -> next;
     }
     cout<<endl;
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
  // insertion at start
  if(position==1){
    insertAtHead(head,d);
    return;
  }
  Node* temp=head;
  int cnt=1;
  while(cnt<position-1){
    temp=temp->next;
    cnt++;
  }
    // insertion at tail
    if(temp->next==NULL){
      insertAtTail(tail,d);
      return;
    }
  Node* nodeToInsert=new Node(d);
  nodeToInsert->next=temp->next;
  temp->next=nodeToInsert;
}
void deleteNode(int position,Node* &head){
  //deleting if first position
  if(position==1){
      Node* temp=head;
      head=head->next;
      //memory free start node
      delete temp;
  }
  else{
      //deleting any middle node
       Node* curr=head;
       Node* prev=NULL;
       int cnt=1;
       while(cnt<=position){
          prev=curr->next;
          cnt++;

       }
       prev->next=curr->next;
       delete  curr;
  }
}
int main(){
    //created a new node
       Node* node1=new Node(10);
       cout<<node1->data<<endl;
       cout<<node1->next<<endl;
    //head pointed to node1
    Node* head=node1;
     Node* tail=node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(tail,head,1,992);
    print(head);
    deleteNode(1,head);
    print(head);
    return 0;
}