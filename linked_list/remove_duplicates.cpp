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
};
Node* uniquesort(Node* head){
    //empty list
    if(head==NULL) return NULL;
    //non empty list
    Node* curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&curr->data==curr->next->data){
               Node* next_next=curr->next->next;
               Node* nodeToDelete=curr->next;
               delete(nodeToDelete);
               curr->next=next_next;
        }else{
            curr==curr->next;
        }
    }
}

int main()
{
    return 0;
}