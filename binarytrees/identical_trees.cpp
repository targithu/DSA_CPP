#include<iostream>
using namespace std;
class node{
 public:
    int data;
    node* left;
    node* right;
 node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
 }
};
node* buildtree(node* root){
  cout<<"Enter the data: " <<endl;
  int data;
  cin>>data;
  root=new node(data);
  if(data==-1){
   return NULL;
  }
  cout<<"Enter data for inserting in left of "<<data<<endl;
  root->left=buildtree(root->left);
  cout<<"Enter data for inserting in right of "<<data<<endl;
  root->right=buildtree(root->right);
 return root;
}
bool isIdentical(node* r1,node* r2){
    //base case
   if(r1==NULL && r2==NULL){
    return true;
   }
    if(r1==NULL && r2!=NULL){
    return false;
   }
   if(r2==NULL && r1!=NULL){
    return false;
   }
   bool left=isIdentical(r1->left,r2->left);
   bool right=isIdentical(r1->right,r2->right);
   bool value = r1->data == r2->data;
 if(left && right && value){
    return true;
 }else{
    return false;
 }
}
int main()
{   node* root=NULL;
    node* r1=buildtree(root);
    node* r2=buildtree(root);
    isIdentical(r1,r2);
    return 0;
}