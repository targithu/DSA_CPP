#include<iostream>
#include<stack>
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
void Rev(node* root){
    stack<node*>l;
    l.push(root);
    l.push(root->left);
    l.push(root->right);
    
}
int main()
{
    return 0;
}