#include <iostream>
using namespace std;
int rep(int arr[],int n){
    int ans=0;
    int k=-1;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
    if(ans==1){
         k=0;
    }else{
         k=1;
    }
  }
 return k;
}


int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    rep(arr,7);
    return 0;
    
}