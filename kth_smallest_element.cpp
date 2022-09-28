#include<iostream>
#include<queue>
using namespace std;

int kthsmallest(int arr[],int l,int r,int k){
    //ONE METHOD
    // for(int i=0;i<k;i++){
    //     q.push(arr[i]);   
    // }
    // for(int i=k;i<r;i++){
    //     if(arr[i]<q.top()){
    //         q.pop();
    //         q.push(arr[i]);
    //     }
    // }
  //  int ans=q.top();//this is the element we desire
  //  return ans;
    //SECOND METHOD
    priority_queue<int> q;
    for(int i=0;i<=l;i++){
        q.push(arr[i]);
    }
    for(int i=0;i<l-k+1;i++){
        q.pop();
    }
      int ans=q.top();//this is the element we desire
    return ans;
}
int main()
{int arr[6]={1,4,3,7,9,5};
int o=kthsmallest(arr,0,5,6);
cout<<o;
    return 0;
}