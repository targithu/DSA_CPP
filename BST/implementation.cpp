#include<iostream>
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
};
node* insertIntoBst(node* root,int d){
//base case
if(root==NULL){
    root=new node(d);
    return root;
}
if(d>root->data){
    //right part insertion
root->right=insertIntoBst(root->right,d);
}else{
    root->left=insertIntoBst(root->left,d);
}
return root;
}
void takeInput(node* root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        insertIntoBst(root,data);
        cin>>data;
    }  
}
node* deleteFromBST(node* root,int val){
    //base case
    if(root==NULL) return root;
    if(root->data==val){
        //0 child
if(root->left==NULL && root->right==NULL){
    delete root;
    return NULL;
}
        //1 child
if(root->left!=NULL && root->right==NULL){
node* temp=root->left;
delete root;
return temp;
}
if(root->right!=NULL && root->left==NULL){
node* temp=root->right;
delete root;
return temp;
}
        //2 child
if(root->right!=NULL && root->left!=NULL){
int mini=minVal(root->right)->data;
root->data=mini;
root->right=deleteFromBST(root->right,mini);
return root;
}

    }else if(root->data>val){
root->left=deleteFromBST(root->left,val);
return root;
    }else{
       root->right=deleteFromBST(root->right,val);
       return root; 
    }
}

int main()
{
    node* root=NULL;
    cout<<"Enter data to create bst"<<endl;
    takeInput(root);
    return 0;
}