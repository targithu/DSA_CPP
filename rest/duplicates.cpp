#include <iostream>
using namespace std;

void duplicates(int arr[],int n){
  int ans=-1;
  for(int i=0;i<n;i++){
    ans=ans^ arr[i];
  
  if(ans==0){
    cout<<"Duplicate "<<arr[i]<<endl;
    break;
  }
}
}
int main(){
    int arr[9];
    for(int i=0;i<9;i++){
      cin>>arr[i];
    }
    duplicates(arr,9);
    return 0;
}
  //  return arr[]
  // int i=0;
  // int k=i++;
  // duplicates(arr[n-k],n-k);