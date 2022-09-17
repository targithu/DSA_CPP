#include<iostream>
using namespace std;
void sort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int k=i+1;k<n;k++){
      if(arr[i]>arr[k]){
          swap(arr[i],arr[k]);
     } }
  }
for(int j=0;j<n;j++){
    cout<<arr[j]<<endl;
}
}
int main(){
    int arr[8]={4,9,7,1,5,18,45,3};
     sort(arr,8);
     return 0;
}