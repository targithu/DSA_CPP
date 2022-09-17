#include<iostream>
#include<queue>
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
int height(node* root){
    //base case
    if(root==NULL) return 0;
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}







int main(){

}