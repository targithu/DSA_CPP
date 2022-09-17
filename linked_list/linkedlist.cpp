#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node* prev;
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
  cout<<"Memory is free for data "<<value<<endl;
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
   Node* temp=head;
   Node* prev=NULL;
   int cnt=1;
  while(cnt<position){
    prev=temp;
    temp=temp->next;
    cnt++;
  }
  if(position==1){
    Node*temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  prev->next=temp->next;
  temp->next=NULL;
  delete temp;
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
    return 0;
}