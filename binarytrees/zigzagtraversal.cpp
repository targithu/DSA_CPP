#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class node{
    int data;
    node* left=NULL;
    node* right=NULL;
     node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
 }
}
vector <int> zigZagTraversal(node* root){
vector<int> result;
if(root==NULL) return  result;
queue<node*>q;
q.push(root);
bool leftToRight=true;
while(!q.empty()){
    int size=q.size();
    vector<int> ans(size);
    for(int i=0;i<size;i++){
     node* frontNode=q.front();
     q.pop();
     int index=leftToRight?i:size-i-1;
     ans[index]=frontNode->data;
     if(frontNode->left) q.push(frontNode->left);
     if(frontNode->right) q.push(frontNode->right);
    }
    //direction change
    leftToRight= !leftToRight;
    for(auto i:ans){
        result.push_back(i);
    }
}
return result;
}

int main()
{
    return 0;
}