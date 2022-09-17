#include<iostream>
using namespace std;
void inSort(int arr[],int n){
    for(int i=1;i<n;i++){
       int temp=arr[i];
       int j=i-1;
        for(;j>=0;j--){
             if(arr[j]>temp) {
                 arr[j+1]=arr[j];
             }   
             else{
                 break;
             }
        }
        arr[j+1]=temp;
        // return 0;
    }
    for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }cout<<endl;
}
int main(){
    int arr[5]={8,9,5,6,1};
    inSort(arr,5);
    return 0;
}