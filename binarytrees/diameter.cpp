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
int height(node* root){
    //base case
    if(root==NULL) return 0;
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
//soln 1 with O(N*N) TC
int dia(node* root){
if(root==NULL){
return 0;}
int op1=dia(root->left);
int op2=dia(root->left);
int op3=height(root->left)+height(root->right)+1;
int ans=max(op1,max(op2,op3));
return ans;
}
//second solution
pair<int,int>diameterfast(node* root){
   if(root==NULL){
      pair<int,int>p=make_pair(0,0);
   return p;}
   pair<int,int>left=diameterfast(root->left);
   pair<int,int>right=diameterfast(root->right);
int op1=left.first;
int op2=right.first;
int op3=left.second+right.second+1;
pair<int,int>ans;
ans.first=max(op1,max(op2,op3));
ans.second=max(left.second,right.second)+1;
int ans=max(op1,max(op2,op3));
return ans;
}
int dia(node* root){
   return diameterfast(root).first;
}
