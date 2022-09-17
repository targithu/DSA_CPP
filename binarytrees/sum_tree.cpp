#include<iostream>
#include<pair>
using namespace std;
class node{
public:
    int data;
    node* right;
    node* left;
 node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
 }
}
pair<bool,int>isSumTreeFast(node* root){
    //base case
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int>p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int>leftAns=isSumTreeFast(root->left);
    pair<bool,int>rightAns=isSumTreeFast(root->right);
    bool isLeftSumTree=leftAns.first;
    bool isRightSumTree=rightAns.first;
    int leftSum=leftAns.second;
    int rightSum=rightAns.second;
    bool condn=root->data==leftSum+rightSum;
    pair<bool,int>ans;
    if(isLeftSumTree && isRightSumTree && condn){
        ans.first=true;
        ans.second=2*root->data;
    }else{
        ans.first=false;
    }
}

int main()
{  return isSumTreeFast(root).first;
    return 0;
}