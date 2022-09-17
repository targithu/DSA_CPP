#include<iostream>
#include<vector>
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
void traverseLeft(node* root,vector<int>&ans){
if(root==NULL||(root->left==NULL && root->right==NULL)) return;
ans.push_back(root->data);
if(root->left) traverseLeft(root->left);
else traverseLeft(root->right);
}
void traverseLeaf(node* root,vector<int>&ans){
    //base case
   if(root==NULL) return;
   if(root->left==NULL && root->right==NULL){
    ans.push_back(root->data);
    return;
   }
   traverseLeaf(root->left,ans);
   traverseLeaf(root->right,ans);
   ans.push_back(root->data);
}
void traverseRight(node* root,vector<int>&ans){
if(root==NULL||(root->left==NULL && root->right==NULL)) return;
ans.push_back(root->data);
if(root->right) traverseRight(root->right,ans);
else traverseRight(root->left,ans);
}
vector<int> boundary(node* root){
vector<int> ans;
if(root==NULL) return ans;
ans.push_back(root->data);
//left part
traverseLeft(root->left,ans);
//traverse leaf nodes
//left subtree
traverseLeaf(root->left,ans);
//right subtree
traverseLeaf(root->right,ans);
//right part
traverseRight(root->right,ans);
return ans;
}

int main()
{
    return 0;
}