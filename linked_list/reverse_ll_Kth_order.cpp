#include<iostream>
using namespace std;

class Node{
 public:
  int data;
  Node* next;
  Node(int data){
      this->data=data;
      this->next=NULL;
  }
};
void Reversell(Node* head,int grp){
}

// int power(int n){
//   if(n==0){
//     return 0;
//   }
//   else  if(n==1){
//    return 1;
//   }
//   else{
//   // int c=2*power(n-1);
//   int c=power(n-1)+power(n-2);
//   return c;
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   // int ans=power(n);
//   // cout<<ans<<endl;
//   int ft=power(n);
//   cout<<ft<<endl;
// }
