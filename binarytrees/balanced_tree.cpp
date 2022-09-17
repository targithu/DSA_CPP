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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
 bool balanced(node* root){
        if(root==NULL) return true;
        bool left=balanced(root->left);
        bool right=balanced(root->right);
bool diff=abs(height(root->left)-height(root->right))<=1;
if(left && right && diff) return 1 ;
else return false;
}

}
int main()
{    node* root=NULL;
    root=buildTree(root);
    return 0;
}