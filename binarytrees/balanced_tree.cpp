#include<iostream>
#include<pair>
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
}};
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
//first method-T.C:O(n**2)
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
//Function to check whether binary tree balanced or not.
 bool balanced(node* root){
        if(root==NULL) return true;
        bool left=balanced(root->left);
        bool right=balanced(root->right);
bool diff=abs(height(root->left)-height(root->right))<=1;
if(left && right && diff) return 1 ;
else return false;
}
//second method T.C-O(n)
pair <bool,int> isBalancedFast(node* root){
    if(root==NULL) {
        pair<bool,int> p=make_pair(true,0);
        return p;
        }
        pair<bool,int>left=isBalancedFast(root->left);
        pair<bool,int>right=isBalancedFast(root->right);
        bool leftAns=left.first;
        bool rightAns=right.first;
bool diff=abs(left.second-right.second)<=1;
pair<bool,int> ans;
ans.second=max(left.second,right.second)+1;
if(leftAns && rightAns && diff) ans.first=1;
else ans.first=false;
return ans;
}
 bool balanced(node* root){
return isBalancedFast(root).first;
}

int main()
{    node* root=NULL;
    root=buildTree(root);
    isBalancedFast(root);
    return 0;
}
