#include <iostream>
#include<vector>
using namespace std;

void arrang(int arr[],int n){
int i=0;
while(i<n){
 for(int j=0;j<n;j++){
     if(arr[j]!=0){
         swap(arr[j],arr[i]);
         i++;
     }
 }
}
}
void print(int arr[],int l){
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[8]={1,0,3,0,0,5,7,9};
    arrang(arr1,8);
    print(arr1,8);
    return 0;
}