#include<iostream>
using namespace std;
class node{
public:
    node* right;
    node* left;
    int data;
node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
}
}

int main()
{
    return 0;
}