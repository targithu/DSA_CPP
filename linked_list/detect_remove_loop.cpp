#include<iostream>
#include<map>
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
//using maps
bool detectloop(Node* head){
    if(head==NULL) return false;
     map<Node*,bool>visited;
     Node* temp=head;
     while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
     }
     return false;
}
//floyd cycle detection algo
Node* floydDetect(Node* head){
if(head==NULL) return NULL;
Node* slow=head;
Node* fast=head;
while(slow!=NULL && fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;
    }slow=slow->next;
    if(slow==fast){
        return slow;
    }
}
return NULL;

}
//to detect where cycle starts
Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydDetect(head);
    Node* slow=head;
    while(slow!=intersection)
{slow=slow->next;
intersection=intersection->next;
}
return slow;}
void removeLoop(Node* head){
    if(head==NULL) return;
    Node* startofLoop=getStartingNode(head);
    Node* temp=startofLoop;
    while(temp->next!=startofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{  
Node* node1=new Node(10);
    return 0;
}