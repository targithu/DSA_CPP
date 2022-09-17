#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
     cout<<"memory is free for node with data"<<endl;
    }
};
void print(Node* tail){
      Node* temp =tail;
      do{
          cout<<tail->data<<" ";
          tail=tail->next;
      }while(tail!=temp);
    cout<<endl;
}
void insertNode(Node* &tail,int element,int d){
    //assuming that the element is present in  the list
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non-empty list
        Node* curr=tail;
        while(curr->data!=element){
           curr=curr->next;
        }
        //element found->curr is represented element
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }}
void deleteNode(Node* &tail,int value){
 //empty list
 if(tail== NULL){
     cout<<"List is empty please check again!"<<endl;
     return;
 }
 else{
     //non-empty
    
    //assuming that"value present in Linked list"
    Node* prev=tail;
    Node* curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;

     }
 }

int main(){
Node* tail=NULL;
insertNode(tail,1,2);
print(tail);
insertNode(tail,2,7);
print(tail);
insertNode(tail,2,9);
print(tail);
insertNode(tail,2,8);
print(tail);
insertNode(tail,7,1);
print(tail);
deleteNode(tail,1);
print(tail);
return 0;
}