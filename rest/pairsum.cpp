#include <iostream>
using namespace std;

void sum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==sum){
             cout<<arr[i]<<" "<<arr[j]<<endl;
         }
        }
    }
}
int main(){
    int arr1[6]={1,3,7,10,5,6};
    sum(arr1,6,17);
    return 0;
}