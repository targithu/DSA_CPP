#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* prev;
Node* next;
//constructor
Node(int d){
   this-> data=d;
   this->prev=NULL;
   this->next=NULL;
}
~Node(){
    int value=this->data;
    //memory free
    if(this->next !=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory is free for node with data"<<endl;
}
};
//traversing a linked list
void print(Node* head){
   Node* temp=head;
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   cout<<endl;
}//gives length of linked list
int getLength(Node* &head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int d){
    //emptylist
    if(head==NULL){
    Node* temp=new Node(d);
    head=temp;
    tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}
void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
     Node* temp=new Node(d);
     tail=temp;
     head=temp;
    }
    else{
     Node* temp=new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;}
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at Last Position
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(int position,Node* &head,Node* &tail,int size){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        //memory free start node
        delete temp;
    }
    else if(position==size){
        Node* las=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<=size){
              prev=las;
              las=las->next;
              cnt++;
        }
        las->prev->next=NULL;
        las->prev=tail;
        las->prev=NULL;
        delete las;
    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<=position){
              prev=curr;
              curr=curr->next;
              cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
    
}
int main(){
    Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    // cout<<getLength(head)<<endl;
    insertAtHead(head,tail,11);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAtTail(head,tail,19);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAtPosition(head,tail,1,89);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAtPosition(head,tail,4,89);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deleteNode(2,head,tail,4);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    // 
    deleteNode(3,head,tail,3);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}