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
void solve(node* root,int sum,int &maxSum,int len,int &maxlen){
if(root==NULL){
    if(len>maxLen){
        maxLen=len;
        maxSum=sum;
    }else if (len==maxLen)
    {
      maxSum=max(sum,maxSum);
    }
    return;
}
sum+=root->data;
solve(root->left,sum,maxSum,len+1,maxLen);
solve(root->right,sum,maxSum,len+1,maxLen);
}
int sumOfLongRootToLeafPath(node* root){
    int len=0;
    int maxLen=0;
    int sum=0;
    int maxSum=INT_MIN;
    solve(root,sum,maxSum,len,maxLen);
    return maxSum;}
    

int main()
{
    return 0;
}