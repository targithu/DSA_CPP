#include<iostream>
#include<map>
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
node* buildTree(node* root){
cout<<"Enter the data: "<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1){
return NULL;
}
cout<<"Enter data for inserting in left"<<endl;
root->left=buildTree(root->left);
cout<<"Enter data for inserting in right"<<endl;
root->right=buildTree(root->right);
return root;
}
int findPosition(int in[],int element,int n){
  for(int i=0;i<n;i++){
    if(in[i]==element){
return i;
    }
  }return -1;
}
node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n){
//base case
if(index>=n || inorderStart>inorderEnd){
    return NULL;
}
int element=pre[index++];
node* temp=new node(element);
int position=findPosition(in,element,n);
//recursive calls
temp->left=solve(in,pre,index,inorderStart,inorderEnd,n);
temp->right=solve(in,pre,index,position+1,inorderEnd,n);
return temp;
}

node* final(int in[],int pre[],int n){
  int preOrderIndex=0;
  node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
  return ans;
}